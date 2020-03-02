#include <libhello/libhello.h>
#include <libprinter/libprinter.h>

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
  libprinter::print("This is app2, using libprinter, greeting twice.");
  libprinter::linefeed();
  libhello::say_hello_world();
  libhello::say_hello_world();
}
