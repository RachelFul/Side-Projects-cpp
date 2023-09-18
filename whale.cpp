#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string input = "turpentine and turtles";
  vector<char> vowels; 
  
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  
  vector<char> result; 

  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
  }
  if (input[i] == 'u' || input[i] == 'e') {
      result.push_back(input[i]);
    }
  }

  for (int k = 0; k < result.size(); k++) {
    cout << result[k];

    }
}
