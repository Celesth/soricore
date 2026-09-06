#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> vec = {0, 2, 3, 45, 6};
int target = 45;

int main() {
  std::cout << "Copyright (c) 2026 Celesth Author. All Rights Reserved."
            << '\n';
  auto it = std::find(vec.begin(), vec.end(), target);

  if (it != vec.end()) {
    std::cout << "found it";

  } else {
    std::cout << "not found" << '\n';
  }
  return 0;
}
