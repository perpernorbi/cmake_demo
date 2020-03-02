#include "libprinter/libprinter.h"

#include <iostream>

namespace libprinter {
void print(const std::string &text) { std::cout << text; }
void linefeed() { std::cout << std::endl; }
} // namespace libprinter
