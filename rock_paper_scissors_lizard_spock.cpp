//Rock, Paper, Scissors, Lizard, Spock

#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));
int computer = rand() % 5 + 1;
int user = 0;

std::cout << "=================================\n";
std::cout << "rock paper scissors lizard spock!\n";
std::cout << "=================================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";

std::cout << "shoot! ";

int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int spock = 5;

std::cin >> user;

/* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */

std::cout << "computer: " << computer << "\n\n";
if (user == rock && computer == scissors) {
  std::cout << "You win!\n";
}

else if (user == scissors && computer == paper) {
  std::cout << "You lose!\n";
}

else if (user == paper && computer == rock) {
  std::cout << "You win!\n";
}

else if (user == lizard && computer == spock) {
  std::cout << "You win!\n";
}

else if (user == spock && computer == scissors) {
  std::cout << "You win!\n";
}
else if (user == scissors && computer == lizard) {
  std::cout << "You lose!\n";
}
else if (user == lizard && computer == paper) {
  std::cout << "You win!\n";
}
else if (user == paper && computer == spock) {
  std::cout << "You win!\n";
}
else if (user == spock && computer == rock) {
  std::cout << "You win!\n";
}
else if (user == rock && computer == lizard) {
  std::cout << "You win!\n";
}

else if (user == computer) {
  std::cout << "Tie!\n";
  }

  else {
    std::cout << "You lose!\n";
}

}
