#include <iostream>
//Boat Survival Text Adventure
int main() {
//Adventure Begins
int food = 3, water = 3, tiger = 0;
int answer11, answer12, answer13;
int answer21, answer22, answer23;
int answer31, answer32, answer33;

std::cout << "~~~~~~~~~~~~~~\n";
std::cout << "THE LIFE OF PI\n";
std::cout << "~~~~~~~~~~~~~~\n\n";
//Day 1
std::cout << ">>>>>>>>>>>\n";
std::cout << "TERRITORIES\n";
std::cout << "<<<<<<<<<<<\n\n";
//DAY 1 CHALLENGE 1
  std::cout << "The Tiger has awaken and became aggressive towards you.\n";
  std::cout << "What do you do?\n\n";
  std::cout << "1)Throw some food to keep it busy.\n";
  std::cout << "2)Thow a rock at it to intimidate it.\n";
  std::cout << "3)Scare it away by throwing some of your water.\n\n";
  std::cin >> answer11;

  if (answer11 == 1) {
    std::cout << "The tiger has calm down and busy eating the ration.\n\n";
    food--;
    tiger++;
    } else if (answer11 == 2) {
      std::cout << "The tiger dodged it and got angrier.\n\n";
      tiger--;
    } else if (answer11 == 3) {
      std::cout << "The tiger hate the water and back off from you.\n\n";
      water--;
    } else {
      std::cout << "INVALID INPUT\n";
      tiger--;
      food--;
      water--;
    }
  if (tiger < 0) {
    std::cout << "The tiger has eaten you.\n";
    std::cout << "THE END";
    return 0;
  }
//DAY 1 CHALLENGE 2
std::cout << "You see a bunch of bananas floating near to your raft.\n";
std::cout << "There is a handful of objects you can use to get it.\n";
std::cout << "What item will you use?\n";
std::cout << "1) a medium sized plank of wood.\n";
std::cout << "2) one of the oars.\n";
std::cout << "3) a life saver jacket.\n\n";
std::cin >> answer12;

switch (answer12) {
  case 1:
  std::cout << "The plank did an inefficient job but it did brought you some to your raft.\n\n";
  food + 2;
  break;
  case 2:
  std::cout << "The oar grabbed a majority of bananas to your boat.\n\n";
  food + 3;
  break;
  case 3:
  std::cout << "As you grabbed a few of the bananas, you knocked some of your water bottles off the boat.\n\n";
  food++;
  water--;
  break;
  default:
  std::cout << "INVALID INPUT\n";
  water--;
  food--;
  tiger--;
  }
  if (tiger < 0) {
      std::cout << "The tiger has eaten you.\n";
      std::cout << "THE END";
      return 0;
      } else if (food <= 0) {
      std::cout << "You have run out of food and died from starvation.\n";
      std::cout << "THE END";
      return 0;
      } else if (water <= 0) {
      std::cout << "You have run out of water and died from thirst.\n";
      std::cout << "THE END";
      return 0;
      } else if (food <= 0) {
    std::cout << "You have run out of food and died from starvation.\n";
    std::cout << "THE END";
    return 0;
    } else if (water <= 0) {
    std::cout << "You have run out of water and died from thirst.\n";
    std::cout << "THE END";
    return 0;
    }

//MEAL
//DAY 1 CHALLENGE 3
std::cout << "As the sunsets, weariness takes over your body and crave sleep.\n";
std::cout << "How will you sleep tonight?\n";
std::cout << "1) Sleep next to the tiger.\n";
std::cout << "2) Toughen up and sleep with nothing.\n";
std::cout << "3) Grab a bunch of life jackets and sleep under it.\n\n";
std::cin >> answer13;

if (answer13 == 1) {
  if (tiger > 0) {
    std::cout << "The tiger was cold too and cuddles with you.\n\n";
    tiger++;
  } else {
    std::cout << "You have agitated the tiger and it kills you.\n";
    std::cout << "THE END.\n";
    return 0;
  }
} else if (answer13 == 2) {
  std::cout << "You died from hypothermia.\n";
  std::cout << "THE END.\n";
  return 0;
} else if (answer13 == 3) {
  std::cout << "You manage through the night.\n\n";
}
//DAY 1 End
std::cout << "Day 1 ends.\n";
std::cout << "You have " << food << " food, and " << water << " water left.\n\n";
//Day 2
std::cout << "^^^^^^^^^^\n";
std::cout << "THE TRIALS\n";
std::cout << "^^^^^^^^^^\n\n";
//DAY 2 CHALLENGE 1
int f = 3;

std::cout << "As daylight breaks, off on the distances you see a boat.\n";
std::cout << "With great urgency, you've strive to get its attention.\n";
for (int i = 0; i <= 2;) {
  std::cout << "With the stuff you have, what will you do?\n";
  std::cout << "1) Flaresticks : light them up and wave for attention.\n";
  std::cout << "2) Shout for attention.\n";
  std::cout << "3) Give up and let the boat go.\n";
  std::cout << "4) Make as much noise as possible on the boat.\n";
  std::cin >> answer21;
//DAY 2 CHALLENGE 1 answer

  if (answer21 == 4 && f == 1) {
    std::cout << "Surprisingly, the boat got your attention and steer towards you.\n";
    std::cout << "However with the ships massive size, it creates huge waves and sink your raft.\n";
    std::cout << "You sink and drowned with the tiger biting your head off.\n";
    std::cout << "THE END";
    return 0;
  }
  else if (answer21 == 1) {
    std::cout << "It does nothing.\n";
    f--;
    std::cout << "You have " << f << " flares left.\n";
    i++;
  } else if (answer21 == 2) {
  std::cout << "It does nothing.\n";
    i++;
  } else if ( answer21 ==3) {
    std::cout << "You solemnly accept your fate and harded your resolve.\n\n";
    i = 3;
  } else if (answer21 == 4) {
    std::cout << "The noise you make on the boat angers the tiger and bites your head off.\n";
    std::cout << "THE END";
    return 0;
  }
}
std::cout << "The boat floats away from you leaving you and the tiger to your trials.\n\n";
//END DAY 2 CHALLENGE 1
//DAY 2 CHALLENGE 2
std::cout << "Th hot summer sun beats down on you giving you a burnt body and dry throat.\n";
std::cout << "What will you do to combat it?\n";
std::cout << "1) Drink some of your water.\n";
std::cout << "2) Cool yourself down by dunking yourself into the ocean.\n";
std::cout << "3) Use a lifejacket to provide shade on yourself.\n\n";
std::cin >> answer22;
//DAY 2 CHALLENGE 2 ANSWER
//Day 3

//End
return 0;
//End of this tale
}

//CHECKPOINT
//   if (tiger < 0) {
//     std::cout << "The tiger has eaten you.\n";
//     std::cout << "THE END";
//     return 0;
//     } else if (food <= 0) {
//     std::cout << "You have run out of food and died from starvation.\n";
//     std::cout << "THE END";
//     return 0;
//     } else if (water <= 0) {
//     std::cout << "You have run out of water and died from thirst.\n";
//     std::cout << "THE END";
//     return 0;
//     }  } else if (food <= 0) {
//   std::cout << "You have run out of food and died from starvation.\n";
//   std::cout << "THE END";
//   return 0;
//   } else if (water <= 0) {
//   std::cout << "You have run out of water and died from thirst.\n";
//   std::cout << "THE END";
//   return 0;
//   }
