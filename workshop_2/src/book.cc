#include "book.h"

void CBook::InsertData() {
  std::cin.ignore();
  std::cout << "-- INSERTING BOOK --" << std::endl;
  std::cout << "Insert inventory number: ";
  std::getline (std::cin, this->inventory_number_);

  std::cout << "Insert author: ";
  std::getline (std::cin, this->author_);

  std::cout << "Insert title: ";
  std::getline (std::cin, this->title_);

  int pages;
  float price;
  std::cout << "Insert pages: ";
  std::cin >> pages;
  if (pages < 0) {
    std::cout << "Please enter a positive number" << std::endl;
    return;
  }
  this->pages_ = pages;

  std::cout << "Insert price: ";
  std::cin >> price;
  if (pages < 0) {
    std::cout << "Please enter a positive number" << std::endl;
    return;
  }
  this->price_ = price;
  
  std::cout << "Book inserted!" << std::endl;
}

void CBook::DisplayData() {
  std::cout << "-- DISPLAYING DATA --" << std::endl;
  std::cout << "Inventory number: " << GetInventoryNumber() << std::endl;
  std::cout << "Author: " << GetAuthor() << std::endl;
  std::cout << "Title: " << GetTitle() << std::endl;
  std::cout << "Number of pages: " << GetPages() << std::endl;
  std::cout << "Price: " << GetPrice() << std::endl;
}

