#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   char firstLetter;

   getline(cin, userInput);
   cin >> firstLetter;

   if (userInput[0] == firstLetter) {
      cout << "Found match: " << firstLetter << endl;
   }
   else {
      cout << "No match: " << firstLetter << endl;
   }

   return 0;
}
