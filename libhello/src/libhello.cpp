#include "libhello/libhello.h"

#include "hello.h"
#include "world.h"

#include <libprinter/libprinter.h>

namespace libhello {
void say_hello_world() {
  say_hello();
  libprinter::print(" ");
  say_world();
  libprinter::linefeed();
}
} // namespace libhello
