#include <iostream>

int main(int argc, char **argv) {
  // Flush after writing to stdout or stderr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Put your code here!

  return 0;
}
