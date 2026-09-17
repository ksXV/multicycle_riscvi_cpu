#pragma once

#include <cassert>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <filesystem>

template <typename T, typename V> struct DUT {
  static constexpr auto DATA_SIZE = 32;
  static constexpr auto CLOCK_DURATION = 4;

  std::unique_ptr<T> dut;
  std::unique_ptr<V> vcd_generator;

  std::uint64_t sim_time = 0;

  using init_dut_fn = void (*)(DUT &);

  DUT(init_dut_fn fn, std::string_view trace_name)
      : dut(std::make_unique<T>()), vcd_generator(std::make_unique<V>()) {
    dut->trace(vcd_generator.get(), 99);

    assert(!trace_name.empty());
    std::string path = "trace/" + std::string(trace_name);
    path.append(".vcd");

    std::filesystem::create_directories("trace");
    vcd_generator->open(path.c_str());

    assert(fn != nullptr);
    fn(*this);
  }

  DUT(const DUT &) = delete;
  DUT &operator=(const DUT &) = delete;

  DUT(DUT &&) = delete;
  DUT &operator=(DUT &&) = delete;

  ~DUT() {
    dut->final(); 
    if (vcd_generator) {
        vcd_generator->close(); 
    }
  }

  T *get_dut() const noexcept { return dut.get(); }

  V *get_vcd_gen() const noexcept { return vcd_generator.get(); }

  void tick() {
    dut->clk_i = 0;
    dut->eval();
    vcd_generator->dump(sim_time);

    sim_time += CLOCK_DURATION / 2;

    dut->clk_i = 1;
    dut->eval();
    vcd_generator->dump(sim_time);

    sim_time += CLOCK_DURATION / 2;
  }

  // tick for purely combinational DUTs (no clk_i port).
  void tick_comb() {
    dut->eval();
    vcd_generator->dump(sim_time);
    sim_time += CLOCK_DURATION;
  }

  template <typename Fn, typename... Args>
  [[nodiscard]] auto execute(Fn fn, Args... args) {
    assert(fn != nullptr);
    return std::invoke(fn, *this, std::forward<Args>(args)...);
  }
};
