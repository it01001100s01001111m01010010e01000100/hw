#include "config.hpp"
#include <iostream>


const int Config::kMax;

int main() {
    std::cout << Config::kMax << "\n";          // (1)
    const int* p = &Config::kMax;                
    std::cout << *p << "\n";
}
