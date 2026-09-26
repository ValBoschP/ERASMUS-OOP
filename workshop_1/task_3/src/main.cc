#include <iostream>

void PrintRectangle(int width, int height, int offset = 0, char c = '*') {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < offset; ++j) {
      std::cout << " ";
    }
    for (int j = 0; j < width; ++j) {
      std::cout << c;
    }
    std::cout << std::endl;
  }
}

int main() {
  int width, height;
  std::cout << "Enter the width: ";
  std::cin >> width;
  std::cout << std::endl << "Enter the height: ";
  std::cin >> height;
  std::cout << std::endl;

  PrintRectangle(width, height);
  return 0;
}