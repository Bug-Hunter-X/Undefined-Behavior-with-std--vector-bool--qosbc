#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;

  // Check for emptiness before accessing size
  if (!vec.empty()) {
    std::cout << "Size: " << vec.size() << std::endl;
  } else {
    std::cout << "Vector is empty" << std::endl;
  }

  return 0;
}
