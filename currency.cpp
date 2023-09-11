#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Soles: ";
  std::cin >> soles;

  dollars = (0.00025 * pesos) + (0.20 * reais) + (0.27 * soles);

  std::cout << "Total US Dollars = $ " << dollars << "\n";

/* GG conversion rates:
Pesos - USD: 0.00025 United States Dollar
Reais - USD: 0.20 United States Dollar
Soles - USD: 0.27 United States Dollar */

  
}
