#include "playground.h"

#include <format>
#include <iostream>
#include <loguru.hpp>

int main() {
  std::cout << "Playground app running!" << std::endl;
  std::cout << std::format("Hello from {}!", "format") << std::endl;
  LOG_F(INFO, "Hello from loguru!");
  return 0;
}
