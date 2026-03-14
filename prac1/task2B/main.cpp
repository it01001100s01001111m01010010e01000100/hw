#include "config.hpp"
#include <iostream>

int main() {
    std::cout << Config::kMax << "\n";          // работает
    const int* p = &Config::kMax;               // тоже работает
    std::cout << *p << "\n";
}
