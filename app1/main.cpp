#include <libhello/libhello.h>

#include <iostream>

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
  std::cout << "This is app1, using iostream, greeting once." << std::endl;
  libhello::say_hello_world();
}
