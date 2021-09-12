#include <iostream>
#include "ttt_functions.hpp"

int main () {

greet();//INTRO

bool player = true;
bool winner = false;

char input;

int end = 0;

std::vector<char> answers = {'A','B','C','D','E','F','G','H','I'};
std::vector<int> leader = {2,2,2,2,2,2,2,2,2};

std::cout << "AAA|BBB|CCC\n";
std::cout << "AAA|BBB|CCC\n";
std::cout << "AAA|BBB|CCC\n";
std::cout << "-----------\n";
std::cout << "DDD|EEE|FFF\n";
std::cout << "DDD|EEE|FFF\n";
std::cout << "DDD|EEE|FFF\n";
std::cout << "-----------\n";
std::cout << "III|JJJ|KKK\n";
std::cout << "III|JJJ|KKK\n";
std::cout << "III|JJJ|KKK\n";


while (winner != false || end <= 9) {
  playerturn(player);//ANNOUNCE PLAYER TURN

  std::cout << "YOUR TURN:";
  std::cin >> input;
  std::cout << "\n\n";

  for (int i = 0; i < answers.size(); i++) {//KEEP TRACK OFF SCORE

    if (input == answers[i] && player == true) {
      leader[i] = 1;
    }//IF END
    if (input == answers[i] && player != true) {
      leader[i] = 0;
    }
  }//FOR END

  board(leader);

  end++;
  std::cout << end; //T
  if (end == 9 ) {
    std::cout << "No one wins.";

    return 0;
  }


  std::cout << "\n\n";

  win (leader, winner);
  std::cout << winner;

  player = !player;

}//WHILE END

return 0;
}//MAIN END
