#include <cstring>
#include <iostream>

void vulnerable(char *tmp) {
  char input[400];
  strcpy(input, tmp); // copies a malicious string into the character buffer
}

int main(int argc, char *argv[]) {
  if (argc != 2) { // error message if run improperly
    std::cout << "Usage: ./prog argn";
    return 1;
  }
  vulnerable(argv[1]); // passes our input to the vulnerable function
  return 0;
}
