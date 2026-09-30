#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class CBook {
 private:
  std::string inventory_number_;
  std::string author_;
  std::string title_;
  int pages_;
  float price_;

 public:
  void InsertData();
  void DisplayData();

  std::string GetInventoryNumber() { return inventory_number_; }
  std::string GetAuthor() { return author_; }
  std::string GetTitle() { return title_; }
  int GetPages() { return pages_; }
  float GetPrice() { return price_; }
};

#endif
