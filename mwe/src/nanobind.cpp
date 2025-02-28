#include <nanobind/nanobind.h>
#include <iostream>

namespace nb = nanobind;

NB_MODULE(mwe_py, m) {
  m.doc() =
      "This is a minimal working example with nanobind and scikit-build-core";

  m.def(
      "add", [](int a, int b) { return a + b; }, nb::arg("a"), nb::arg("b"));
  m.def("message", []() { std::printf("Hello from nanobind!\n"); });
}