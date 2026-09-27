#include <iostream>
#include <string>
int main() {
  std::string msg;
  while (true) {
    std::cout << ">: ";
    if (!(std::cin >> msg))
      break;

    if (msg == "mommy") {
      std::cout << "good boy~'\n";
    } else if (msg == "cr" || msg == "rights") {
      std::cout << "Copyright (c) 2026 Celesth. All Rights Reserved.\n";
    } else if (msg == "exit" || msg == "quit") {
      break;
    } else {
      std::cout << "alr vro thats enough\n";
    };
  }
  return 0;
}
