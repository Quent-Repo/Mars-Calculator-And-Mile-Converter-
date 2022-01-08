//Grrkek
#include <iostream>

int main() {
  double weg = 0;
  double mas = 0;
  double mile = 0;
  double kil = 0;
  // Add your code below  
  std::cout << "What the weight: ";
  std::cin >> weg;
  mas = (weg/9.81)*3.711;
  std::cout << mas << "\n";
  std::cout << "Miles to kilometers";
  std::cin >> mile;
  kil = mile *1.609344;
  std::cout << kil << "\n";
}