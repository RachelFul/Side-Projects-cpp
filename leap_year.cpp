#include <iostream>

int main() {
  
  int year;

  std::cout << "Enter a year: ";
  std::cin >> year;

  if (year % 400 == 0) {
    std::cout << year << " is a leap year.";
  }
  
  else if (year % 100 == 0) {
    std::cout << year << " is not a leap year.";
  }

  else if (year % 4 == 0) {
    std::cout << year << " is a leap year.";
  }

  else {
    std::cout << year << " is not a leap year.";
  }

  return 0;

}
