#include "playground.h"

#include <fmt/core.h>

#include <iostream>
#include <loguru/loguru.hpp>

int main() {
  std::cout << "Playground app running!" << std::endl;
  fmt::print("Hello from fmt!\n");
  LOG_F(INFO, "Hello from loguru!");
  return 0;
}
