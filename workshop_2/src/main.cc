#include "book.h"

#include <iostream>

float TotalValue(CBook collection[], int collection_size) {
  float total_value = 0;
  for (int i = 0; i < collection_size; ++i) {
    total_value += collection[i].GetPrice();
  }
  return total_value;
}

void SearchAuthor(CBook collection[], int collection_size, std::string author) {
  bool author_found = false;
  for (int i = 0; i < collection_size; ++i) {
    if (collection[i].GetAuthor() == author) {
      collection[i].DisplayData();
      author_found = true;
    }
  }
  if (!author_found) std::cout << "Author not found :(" << std::endl;
}

struct Array {
  CBook elements[100];
  int n_elements;
};

Array FilteredCollection(CBook collection[], int collection_size) {
  Array result_collection;
  for (int i = 0; i < collection_size; ++i) {

  }
}

int main() {
  int collection_size;
  std::string author;
  std::cout << "Enter the number of books: ";
  std::cin >> collection_size;
  CBook *collection = new CBook[collection_size];

  for (int i = 0; i < collection_size; ++i) {
    collection[i].InsertData();
    collection[i].DisplayData();
  }
  std::cout << "All books inserted" << std::endl;

  std::cout << std::endl << "Total books value: " << TotalValue(collection, collection_size) << " €" << std::endl;
  
  std::cout << "Enter the author: ";
  std::cin.ignore();
  std::getline (std::cin, author);
  SearchAuthor(collection, collection_size, author);

  delete [] collection;
  return 0;
}