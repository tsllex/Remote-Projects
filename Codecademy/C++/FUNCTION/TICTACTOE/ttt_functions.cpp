#include <iostream>
#include <vector>

void greet() {
  std::cout << "XOXOXOXOXOX\n";
  std::cout << "TIC TAC TOE\n";
  std::cout << "XOXOXOXOXOX\n\n";
  std::cout << "2-Player game version\n\n";
}//GREET END
void playerturn(bool player) {
  if (player == true) {
    std::cout << "PLAYER 1 TURN\n\n";
  } else {
    std::cout << "PLAYER 2 TURN\n\n";
  }
}//PLAYERTURN END

void board (std::vector<int> leader) {
  if (leader[0] == 2 && leader[1] == 2 && leader[2] == 2) {
    std::cout << "AAA|BBB|CCC\n";
    std::cout << "AAA|BBB|CCC\n";
    std::cout << "AAA|BBB|CCC\n";
  } else if (leader[0] == 1 && leader[1] == 2 && leader[2] == 2) {
    std::cout << "X X|BBB|CCC\n";
    std::cout << " X |BBB|CCC\n";
    std::cout << "X X|BBB|CCC\n";
  } else if (leader[0] == 0 && leader[1] == 2 && leader[2] == 2) {
    std::cout << " O |BBB|CCC\n";
    std::cout << "O O|BBB|CCC\n";
    std::cout << " O |BBB|CCC\n";
  } else if (leader[0] == 2 && leader[1] == 1 && leader[2] == 2) {
    std::cout << "AAA|X X|CCC\n";
    std::cout << "AAA| X |CCC\n";
    std::cout << "AAA|X X|CCC\n";
  } else if (leader[0] == 2 && leader[1] == 0 && leader[2] == 2) {
    std::cout << "AAA| O |CCC\n";
    std::cout << "AAA|O O|CCC\n";
    std::cout << "AAA| O |CCC\n";
  } else if (leader[0] == 2 && leader[1] == 2 && leader[2] == 1) {
    std::cout << "AAA|BBB|X X\n";
    std::cout << "AAA|BBB| X \n";
    std::cout << "AAA|BBB|X X\n";
  } else if (leader[0] == 2 && leader[1] == 2 && leader[2] == 0) {
    std::cout << "AAA|BBB| O \n";
    std::cout << "AAA|BBB|O O\n";
    std::cout << "AAA|BBB| O \n";
  //SINGLES
  } else if (leader[0] == 1 && leader[1] == 1 && leader[2] == 2) {
    std::cout << "X X|X X|CCC\n";
    std::cout << " X | X |CCC\n";
    std::cout << "X X|X X|CCC\n";
  } else if (leader[0] == 1 && leader[1] == 0 && leader[2] == 2) {
    std::cout << "X X| O |CCC\n";
    std::cout << " X |O O|CCC\n";
    std::cout << "X X| O |CCC\n";
  } else if (leader[0] == 1 && leader[1] == 2 && leader[2] == 1) {
    std::cout << "X X|BBB|X X\n";
    std::cout << " X |BBB| X \n";
    std::cout << "X X|BBB|X X\n";
  } else if (leader[0] == 1 && leader[1] == 2 && leader[2] == 0) {
    std::cout << "X X|BBB| O \n";
    std::cout << " X |BBB|O O\n";
    std::cout << "X X|BBB| O \n";
  } else if (leader[0] == 2 && leader[1] == 1 && leader[2] == 1) {
    std::cout << "AAA|X X|X X\n";
    std::cout << "AAA| X | X \n";
    std::cout << "AAA|X X|X X\n";
  } else if (leader[0] == 2 && leader[1] == 1 && leader[2] == 0) {
    std::cout << "AAA|X X| O \n";
    std::cout << "AAA| X |O O\n";
    std::cout << "AAA|X X| O \n";
  } else if (leader[0] == 0 && leader[1] == 0 && leader[2] == 2) {
    std::cout << " O | O |CCC\n";
    std::cout << "O O|O O|CCC\n";
    std::cout << " O | O |CCC\n";
  } else if (leader[0] == 1 && leader[1] == 0 && leader[2] == 2) {
    std::cout << "X X| O |CCC\n";
    std::cout << " X |O O|CCC\n";
    std::cout << "X X| O |CCC\n";
  } else if (leader[0] == 2 && leader[1] == 0 && leader[2] == 0) {
    std::cout << "AAA| O | O \n";
    std::cout << "AAA|O O|O O\n";
    std::cout << "AAA| O | O \n";
  } else if (leader[0] == 0 && leader[1] == 2 && leader[2] == 0) {
    std::cout << " O |BBB| O \n";
    std::cout << "O O|BBB|O O\n";
    std::cout << " O |BBB| O \n";
  } else if (leader[0] == 0 && leader[1] == 2 && leader[2] == 1) {
    std::cout << " O |BBB|X X\n";
    std::cout << "O O|BBB| X \n";
    std::cout << " O |BBB|X X\n";
  } else if (leader[0] == 0 && leader[1] == 1 && leader[2] == 2) {
    std::cout << " O |X X|CCC\n";
    std::cout << "O O| X |CCC\n";
    std::cout << " O |X X|CCC\n";
  //DOUBLE
  } else if (leader[0] == 1 && leader[1] == 1 && leader[2] == 1) {
    std::cout << "X X|X X|X X\n";
    std::cout << " X | X | X \n";
    std::cout << "X X|X X|X X\n";
  } else if (leader[0] == 0 && leader[1] == 0 && leader[2] == 0) {
    std::cout << " O | O | O \n";
    std::cout << "O O|O O|O O\n";
    std::cout << " O | O | O \n";
  } else if (leader[0] == 1 && leader[1] == 1 && leader[2] == 0) {
    std::cout << "X X|X X| O \n";
    std::cout << " X | X |O O\n";
    std::cout << "X X|X X| O \n";
  } else if (leader[0] == 0 && leader[1] == 0 && leader[2] == 1) {
    std::cout << " O | O |X X\n";
    std::cout << "O O|O O| X \n";
    std::cout << " O | O |X X\n";
  } else if (leader[0] == 1 && leader[1] == 0 && leader[2] == 0) {
    std::cout << "X X| O | O \n";
    std::cout << " X |O O|O O\n";
    std::cout << "X X| O | O \n";
  } else if (leader[0] == 0 && leader[1] == 1 && leader[2] == 1) {
    std::cout << " O |X X|X X\n";
    std::cout << "O O| X | X \n";
    std::cout << " O |X X|X X\n";
  } else if (leader[0] == 1 && leader[1] == 0 && leader[2] == 1) {
    std::cout << "X X| O |X X\n";
    std::cout << " X |O O| X \n";
    std::cout << "X X| O |X X\n";
  } else if (leader[0] == 0 && leader[1] == 1 && leader[2] == 0) {
    std::cout << " O |X X| O \n";
    std::cout << "O O| X |O O\n";
    std::cout << " O |X X| O \n";
    //TRIPLE
  }

std::cout << "-----------\n";

if (leader[3] == 2 && leader[4] == 2 && leader[5] == 2) {
  std::cout << "DDD|EEE|FFF\n";
  std::cout << "DDD|EEE|FFF\n";
  std::cout << "DDD|EEE|FFF\n";
} else if (leader[3] == 1 && leader[4] == 2 && leader[5] == 2) {
  std::cout << "X X|EEE|FFF\n";
  std::cout << " X |EEE|FFF\n";
  std::cout << "X X|EEE|FFF\n";
} else if (leader[3] == 0 && leader[4] == 2 && leader[5] == 2) {
  std::cout << " O |EEE|FFF\n";
  std::cout << "O O|EEE|FFF\n";
  std::cout << " O |EEE|FFF\n";
} else if (leader[3] == 2 && leader[4] == 1 && leader[5] == 2) {
  std::cout << "DDD|X X|FFF\n";
  std::cout << "DDD| X |FFF\n";
  std::cout << "DDD|X X|FFF\n";
} else if (leader[3] == 2 && leader[4] == 0 && leader[5] == 2) {
  std::cout << "DDD| O |FFF\n";
  std::cout << "DDD|O O|FFF\n";
  std::cout << "DDD| O |FFF\n";
} else if (leader[3] == 2 && leader[4] == 2 && leader[5] == 1) {
  std::cout << "DDD|EEE|X X\n";
  std::cout << "DDD|EEE| X \n";
  std::cout << "DDD|EEE|X X\n";
} else if (leader[3] == 2 && leader[4] == 2 && leader[5] == 0) {
  std::cout << "DDD|EEE| O \n";
  std::cout << "DDD|EEE|O O\n";
  std::cout << "DDD|EEE| O \n";
  //SINGLES
} else if (leader[3] == 1 && leader[4] == 1 && leader[5] == 2) {
  std::cout << "X X|X X|FFF\n";
  std::cout << " X | X |FFF\n";
  std::cout << "X X|X X|FFF\n";
} else if (leader[3] == 1 && leader[4] == 0 && leader[5] == 2) {
  std::cout << "X X| O |FFF\n";
  std::cout << " X |O O|FFF\n";
  std::cout << "X X| O |FFF\n";
} else if (leader[3] == 1 && leader[4] == 2 && leader[5] == 1) {
  std::cout << "X X|EEE|X X\n";
  std::cout << " X |EEE| X \n";
  std::cout << "X X|EEE|X X\n";
} else if (leader[3] == 1 && leader[4] == 2 && leader[5] == 0) {
  std::cout << "X X|EEE| O \n";
  std::cout << " X |EEE|O O\n";
  std::cout << "X X|EEE| O \n";
} else if (leader[3] == 2 && leader[4] == 1 && leader[5] == 1) {
  std::cout << "DDD|X X|X X\n";
  std::cout << "DDD| X | X \n";
  std::cout << "DDD|X X|X X\n";
} else if (leader[3] == 2 && leader[4] == 1 && leader[5] == 0) {
  std::cout << "DDD|X X| O \n";
  std::cout << "DDD| X |O O\n";
  std::cout << "DDD|X X| O \n";
} else if (leader[3] == 0 && leader[4] == 0 && leader[5] == 2) {
  std::cout << " O | O |FFF\n";
  std::cout << "O O|O O|FFF\n";
  std::cout << " O | O |FFF\n";
} else if (leader[3] == 1 && leader[4] == 0 && leader[5] == 2) {
  std::cout << "X X| O |FFF\n";
  std::cout << " X |O O|FFF\n";
  std::cout << "X X| O |FFF\n";
} else if (leader[3] == 2 && leader[4] == 0 && leader[5] == 0) {
  std::cout << "DDD| O | O \n";
  std::cout << "DDD|O O|O O\n";
  std::cout << "DDD| O | O \n";
} else if (leader[3] == 0 && leader[4] == 2 && leader[5] == 0) {
  std::cout << " O |EEE| O \n";
  std::cout << "O O|EEE|O O\n";
  std::cout << " O |EEE| O \n";
} else if (leader[3] == 0 && leader[4] == 2 && leader[5] == 1) {
  std::cout << " O |EEE|X X\n";
  std::cout << "O O|EEE| X \n";
  std::cout << " O |EEE|X X\n";
} else if (leader[3] == 0 && leader[4] == 1 && leader[5] == 2) {
  std::cout << " O |X X|FFF\n";
  std::cout << "O O| X |FFF\n";
  std::cout << " O |X X|FFF\n";

//DOUBLE
} else if (leader[3] == 1 && leader[4] == 1 && leader[5] == 1) {
  std::cout << "X X|X X|X X\n";
  std::cout << " X | X | X \n";
  std::cout << "X X|X X|X X\n";
} else if (leader[3] == 0 && leader[4] == 0 && leader[5] == 0) {
  std::cout << " O | O | O \n";
  std::cout << "O O|O O|O O\n";
  std::cout << " O | O | O \n";
} else if (leader[3] == 1 && leader[4] == 1 && leader[5] == 0) {
  std::cout << "X X|X X| O \n";
  std::cout << " X | X |O O\n";
  std::cout << "X X|X X| O \n";
} else if (leader[3] == 0 && leader[4] == 0 && leader[5] == 1) {
  std::cout << " O | O |X X\n";
  std::cout << "O O|O O| X \n";
  std::cout << " O | O |X X\n";
} else if (leader[3] == 1 && leader[4] == 0 && leader[5] == 0) {
  std::cout << "X X| O | O \n";
  std::cout << " X |O O|O O\n";
  std::cout << "X X| O | O \n";
} else if (leader[3] == 0 && leader[4] == 1 && leader[5] == 1) {
  std::cout << " O |X X|X X\n";
  std::cout << "O O| X | X \n";
  std::cout << " O |X X|X X\n";
} else if (leader[3] == 1 && leader[4] == 0 && leader[5] == 1) {
  std::cout << "X X| O |X X\n";
  std::cout << " X |O O| X \n";
  std::cout << "X X| O |X X\n";
} else if (leader[3] == 0 && leader[4] == 1 && leader[5] == 0) {
  std::cout << " O |X X| O \n";
  std::cout << "O O| X |O O\n";
  std::cout << " O |X X| O \n";
  //TRIPLE
}

std::cout << "-----------\n";

if (leader[6] == 2 && leader[7] == 2 && leader[8] == 2) {
  std::cout << "GGG|HHH|III\n";
  std::cout << "GGG|HHH|III\n";
  std::cout << "GGG|HHH|III\n";
} else if (leader[6] == 1 && leader[7] == 2 && leader[8] == 2) {
  std::cout << "X X|HHH|III\n";
  std::cout << " X |HHH|III\n";
  std::cout << "X X|HHH|III\n";
} else if (leader[6] == 0 && leader[7] == 2 && leader[8] == 2) {
  std::cout << " O |HHH|III\n";
  std::cout << "O O|HHH|III\n";
  std::cout << " O |HHH|III\n";
} else if (leader[6] == 2 && leader[7] == 1 && leader[8] == 2) {
  std::cout << "GGG|X X|III\n";
  std::cout << "GGG| X |III\n";
  std::cout << "GGG|X X|III\n";
} else if (leader[6] == 2 && leader[7] == 0 && leader[8] == 2) {
  std::cout << "GGG| O |III\n";
  std::cout << "GGG|O O|III\n";
  std::cout << "GGG| O |III\n";
} else if (leader[6] == 2 && leader[7] == 2 && leader[8] == 1) {
  std::cout << "GGG|HHH|X X\n";
  std::cout << "GGG|HHH| X \n";
  std::cout << "GGG|HHH|X X\n";
} else if (leader[6] == 2 && leader[7] == 2 && leader[8] == 0) {
  std::cout << "GGG|HHH| O \n";
  std::cout << "GGG|HHH|O O\n";
  std::cout << "GGG|HHH| O \n";
  //SINGLES
} else if (leader[6] == 1 && leader[7] == 1 && leader[8] == 2) {
  std::cout << "X X|X X|III\n";
  std::cout << " X | X |III\n";
  std::cout << "X X|X X|III\n";
} else if (leader[6] == 1 && leader[7] == 0 && leader[8] == 2) {
  std::cout << "X X| O |III\n";
  std::cout << " X |O O|III\n";
  std::cout << "X X| O |III\n";
} else if (leader[6] == 1 && leader[7] == 2 && leader[8] == 1) {
  std::cout << "X X|HHH|X X\n";
  std::cout << " X |HHH| X \n";
  std::cout << "X X|HHH|X X\n";
} else if (leader[6] == 1 && leader[7] == 2 && leader[8] == 0) {
  std::cout << "X X|HHH| O \n";
  std::cout << " X |HHH|O O\n";
  std::cout << "X X|HHH| O \n";
} else if (leader[6] == 2 && leader[7] == 1 && leader[8] == 1) {
  std::cout << "GGG|X X|X X\n";
  std::cout << "GGG| X | X \n";
  std::cout << "GGG|X X|X X\n";
} else if (leader[6] == 2 && leader[7] == 1 && leader[8] == 0) {
  std::cout << "GGG|X X| O \n";
  std::cout << "GGG| X |O O\n";
  std::cout << "GGG|X X| O \n";
} else if (leader[6] == 0 && leader[7] == 0 && leader[8] == 2) {
  std::cout << " O | O |III\n";
  std::cout << "O O|O O|III\n";
  std::cout << " O | O |III\n";
} else if (leader[6] == 1 && leader[7] == 0 && leader[8] == 2) {
  std::cout << "X X| O |III\n";
  std::cout << " X |O O|III\n";
  std::cout << "X X| O |III\n";
} else if (leader[6] == 2 && leader[7] == 0 && leader[8] == 0) {
  std::cout << "GGG| O | O \n";
  std::cout << "GGG|O O|O O\n";
  std::cout << "GGG| O | O \n";
} else if (leader[6] == 0 && leader[7] == 2 && leader[8] == 0) {
  std::cout << " O |HHH| O \n";
  std::cout << "O O|HHH|O O\n";
  std::cout << " O |HHH| O \n";
} else if (leader[6] == 0 && leader[7] == 2 && leader[8] == 1) {
  std::cout << " O |HHH|X X\n";
  std::cout << "O O|HHH| X \n";
  std::cout << " O |HHH|X X\n";
} else if (leader[6] == 0 && leader[7] == 1 && leader[8] == 2) {
  std::cout << " O |X X|III\n";
  std::cout << "O O| X |III\n";
  std::cout << " O |X X|III\n";

//DOUBLE
} else if (leader[6] == 1 && leader[7] == 1 && leader[8] == 1) {
  std::cout << "X X|X X|X X\n";
  std::cout << " X | X | X \n";
  std::cout << "X X|X X|X X\n";
} else if (leader[6] == 0 && leader[7] == 0 && leader[8] == 0) {
  std::cout << " O | O | O \n";
  std::cout << "O O|O O|O O\n";
  std::cout << " O | O | O \n";
} else if (leader[6] == 1 && leader[7] == 1 && leader[8] == 0) {
  std::cout << "X X|X X| O \n";
  std::cout << " X | X |O O\n";
  std::cout << "X X|X X| O \n";
} else if (leader[6] == 0 && leader[7] == 0 && leader[8] == 1) {
  std::cout << " O | O |X X\n";
  std::cout << "O O|O O| X \n";
  std::cout << " O | O |X X\n";
} else if (leader[6] == 1 && leader[7] == 0 && leader[8] == 0) {
  std::cout << "X X| O | O \n";
  std::cout << " X |O O|O O\n";
  std::cout << "X X| O | O \n";
} else if (leader[6] == 0 && leader[7] == 1 && leader[8] == 1) {
  std::cout << " O |X X|X X\n";
  std::cout << "O O| X | X \n";
  std::cout << " O |X X|X X\n";
} else if (leader[6] == 1 && leader[7] == 0 && leader[8] == 1) {
  std::cout << "X X| O |X X\n";
  std::cout << " X |O O| X \n";
  std::cout << "X X| O |X X\n";
} else if (leader[6] == 0 && leader[7] == 1 && leader[8] == 0) {
  std::cout << " O |X X| O \n";
  std::cout << "O O| X |O O\n";
  std::cout << " O |X X| O \n";
    //TRIPLE
}

}//BOARD END
  bool win (std::vector<int> leader, bool winner) {
  if (leader[0] == 1 && leader[1] == 1 && leader[2] == 1 ) {
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[3] == 1 && leader[4] == 1 && leader[5] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[6] == 1 && leader[7] == 1 && leader[8] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[0] == 1 && leader[3] == 1 && leader[6] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[1] == 1 && leader[4] == 1 && leader[7] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[2] == 1 && leader[5] == 1 && leader[8] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[0] == 1 && leader[4] == 1 && leader[8] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[2] == 1 && leader[4] == 1 && leader[6] == 1 ){
    std::cout << "Player 1 wins\n";
    return winner = true;
  } else if (leader[0] == 0 && leader[1] == 0 && leader[2] == 0 ) {
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[3] == 0 && leader[4] == 0 && leader[5] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[6] == 0 && leader[7] == 0 && leader[8] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[0] == 0 && leader[3] == 0 && leader[6] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[1] == 0 && leader[4] == 0 && leader[7] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[2] == 0 && leader[5] == 0 && leader[8] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[0] == 0 && leader[4] == 0 && leader[8] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  } else if (leader[2] == 0 && leader[4] == 0 && leader[6] == 0 ){
    std::cout << "Player 2 wins\n";
    return winner = true;
  }
}//WIN END
