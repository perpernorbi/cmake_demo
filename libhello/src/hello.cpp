#include "hello.h"

#include <libprinter/libprinter.h>

namespace libhello {
void say_hello() { libprinter::print("hello"); }
} // namespace libhello
