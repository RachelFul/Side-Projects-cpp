#include <iostream>

int main() {
  
  double weight;
  int x;

  std::cout << "Enter your weight: ";
  std::cin >> weight;

  std::cout << "\nI have information about the following planets:\n\n";
  std::cout << "  1. Mercury  2. Venus  3. Mars\n";
  std::cout << "  4. Jupiter  5. Saturn 6. Uranus 7. Neptune\n\n";

  std::cout << "Enter your destination: ";
  std::cin << x;

  if (x == 1) {
    
    weight = weight * 0.38;

  }

  if (x == 2) {

    weight = weight * 0.91;

  }

  if (x == 3) {

    weight = weight * 0.38;

  }

  if (x == 4) {

    weight = weight * 2.34;
  }

  if (x == 5) {

    weight = weight * 1.06;

  }

  if (x == 6) {

    weight = weight * 0.92;

  }

  if (x == 7) {

    weight = weight * 1.19;

  }

  std::cout << "\nYour weight: " << weight << "\n";
  
}
