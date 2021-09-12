//Rock, Paper, Scissors, Lizard, and Spock Game
//from the TV show Big Bang Theory

#include <iostream>
#include <stdlib.h>

int main() {

//random number generator for computer
srand (time(NULL));
int computer = rand() % 3 + 1; //can only be 1,2, or 3

int user = 0;

//intro
std::cout << "=================================\n";
std::cout << "ROCK PAPER SCISSORS LIZARD SPOCK!\n";
std::cout << "=================================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";

std::cout << "shoot! ";
//user's choice
std::cin >> user;
//The game results
//player's choice announcement
switch (user) {
  case 1:
  std::cout << "Player chose rock.\n";
  break;
  case 2:
  std::cout << "Player chose paper.\n";
  break;
  case 3:
  std::cout << "Player chose scissors.\n";
  break;
  case 4:
  std::cout << "Player chose lizard.\n";
  break;
  case 5:
  std::cout << "Player chose spock.\n";
  break;
  default:
  std::cout << "INVALID INPUT!";
  break;
}
//computer's choice announcement
switch (computer) {
  case 1:
  std::cout << "Computer chose rock.\n";
  break;
  case 2:
  std::cout << "Computer chose paper.\n";
  break;
  case 3:
  std::cout << "Computer chose scissors.\n";
  break;
  case 4:
  std::cout << "Computer chose lizard.\n";
  break;
  case 5:
  std::cout << "Computer chose spock.\n";
  break;
  default:
  std::cout << "INVALID INPUT!";
  break;
}
//the result
if (user == computer) {
  std::cout << "***********\n";
  std::cout << "It's a tie!\n";
  std::cout << "***********\n";
//the rock result
} else if (user == 1) {
  if (computer == 2 || computer == 5) {
  std::cout << "**************\n";
  std::cout << "Computer wins!\n";
  std::cout << "**************\n";
  }
  if (computer == 3 || computer == 4) {
  std::cout << "************\n";
  std::cout << "Player wins!\n";
  std::cout << "************\n";
  }
//the paper result
} else if (user == 2) {
  if (computer == 3 || computer == 4) {
  std::cout << "**************\n";
  std::cout << "Computer wins!\n";
  std::cout << "**************\n";
  }
  if (computer == 1 || computer == 5) {
  std::cout << "************\n";
  std::cout << "Player wins!\n";
  std::cout << "************\n";
  }
//the scissors result
} else if (user == 3) {
  if (computer == 1 || computer == 5) {
  std::cout << "**************\n";
  std::cout << "Computer wins!\n";
  std::cout << "**************\n";
  }
  if (computer == 2 || computer == 4) {
  std::cout << "************\n";
  std::cout << "Player wins!\n";
  std::cout << "************\n";
  }
} else if (user == 4) {
  if (computer == 1 || computer == 3) {
  std::cout << "**************\n";
  std::cout << "Computer wins!\n";
  std::cout << "**************\n";
  }
  if (computer == 5 || computer == 2) {
  std::cout << "************\n";
  std::cout << "Player wins!\n";
  std::cout << "************\n";
  }
} else if (user == 5) {
  if (computer == 2 || computer == 4) {
  std::cout << "**************\n";
  std::cout << "Computer wins!\n";
  std::cout << "**************\n";
  }
  if (computer == 1 || computer == 3) {
  std::cout << "************\n";
  std::cout << "Player wins!\n";
  std::cout << "************\n";
  }
} else {
  std::cout << "INVALID INPUT!";
}
//END
}
