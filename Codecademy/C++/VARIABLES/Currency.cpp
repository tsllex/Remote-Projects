#include <iostream>

int main() {
  double pesos, reais, soles; //foregin currency variables
  double dollars; //US currency variable

  std::cout << "Enter number of Colombian Pesos:";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles:";
  std::cin >> soles;

  //1COP = .00026USD
  //1BRL = .19USD
  //1PEN = .26USD

dollars = .00026 * pesos;
std::cout << "You have a total of $" << dollars << " from Colombian Pesos. \n";

dollars = .19 * reais;
std::cout << "You have a total of $" << dollars << " from Brazilian Reais. \n";

dollars = .26 * soles;
std::cout << "You have a total of $" << dollars << " from Peruvian Soles. \n";

  dollars = (.00026 * pesos) + (.19 * reais) + (.26 * soles);

  std::cout << "The total amount of US Dollars from all foreign currencies is : $" << dollars << "\n";
}
