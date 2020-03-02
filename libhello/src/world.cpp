#include "hello.h"

#include <libprinter/libprinter.h>

namespace libhello {
void say_world() { libprinter::print("world"); }
} // namespace libhello
