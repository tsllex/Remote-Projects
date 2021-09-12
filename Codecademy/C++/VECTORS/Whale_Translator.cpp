#include <iostream>
#include <vector>
#include <string>

int main () {
// WHALE, WHALE, WHALE
// WHAT HAVE WE GO HERE?

std::string input = "Do you see what I see";

std::cout << "@@@@@@@@@@@@@@@@\n";
std::cout << "WHALE TRANSLATOR\n";
std::cout << "@@@@@@@@@@@@@@@@\n\n";
//ASKING FOR INPUT
// std::cout << "Pleae input what you want to say to convert into Whale Speech\n\n";
// std::cout << "INPUT: ";
// std::cin >> input;
std::cout << input;
std::cout << "\n\n";
//TRANSLATOR
std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
std::vector<char> result;

std::cout << "It would translated into : ";

for (int i = 0; i < input.size(); i++) {
  for (int j = 0; j < vowels.size(); j++) {
    if (input[i] == vowels[j]) {

      result.push_back(input[i]);
    }
  }//INNER CIRCLE
  if (input[i] == 'e' || input[i] == 'u') {
    result.push_back(input[i]);
  }
}//OUTER CIRCLE
//RESULT
for (int k = 0; k < result.size(); k++) {
std::cout << result[k];
}

std::cout << "\n";

return 0;
}//END
