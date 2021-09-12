#include <iostream>
#include <vector>

int main () {
std::vector<int> num = {2, 4, 3, 6, 1};

std::vector<int> odd;
std::vector<int> even;
for (int i = 0; i < num.size(); i++)  {
  if (num[i] % 2 == 0) {
    even.push_back(num[i]);
  } else {
    odd.push_back(num[i]);
  }
}

int sum;
int prod = 1;

std::cout << "Even numbers are : \n";
for (int i = 0; i<even.size(); i++) {
  std::cout << even[i] << " ";
  sum = sum + even[i];
}
std::cout << "\n\n";
std::cout << "The Sum of even numbers is " << sum << "\n\n";

std::cout << "Odd numbers are : \n";
for (int i = 0; i<odd.size(); i++) {
  std::cout << odd[i] << " ";
  prod = prod * odd[i];
}

std::cout << "\n\n";
std::cout << "The product of odd numbers is " << prod;

return 0;
}//END
