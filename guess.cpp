#include <iostream>
using namespace std;

int main() {

  int guess;
  
  int tries = 0;

  cout << "I have a number 1-10.\n";
  cout << "Please guess it: ";
  cin >> guess;
 
  // Write a while loop here:
  while (guess != 8 && tries < 50) {
    cout << "Wrong guess, try again: ";
    cin >> guess;

    tries++;
  }
  
  
  if (guess == 8) {
    
    cout << "You got it!\n";
  
  }  
  
}
