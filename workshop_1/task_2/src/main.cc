#include <iostream>

struct Array {
  int elements[100];
  int n_elements;
};

Array PositiveNumbers(Array numbers) {
  Array result;
  for (int i = 0; i < numbers.n_elements; ++i) {
    if (numbers.elements[i] > 0) {
      result.elements[result.n_elements] = numbers.elements[i];
      ++result.n_elements;
    }
  }
  return result;
}

int main() {
  Array numbers;
  Array result;

  std::cout << "Enter the number of elements: ";
  std::cin >> numbers.n_elements;

  std::cout << "Enter the elements:" << std::endl;
  for (int i = 0; i < numbers.n_elements; ++i) {
    std::cout << "Element " << i + 1 << ": ";
    std::cin >> numbers.elements[i];
  }
  result = PositiveNumbers(numbers);
  std::cout << "Positive numbers:" << std::endl;
  for (int i = 0; i < result.n_elements; ++i) {
    std::cout << result.elements[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Number of positive numbers: " << result.n_elements;

  return 0;
}