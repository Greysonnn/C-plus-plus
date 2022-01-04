#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   /* Your solution goes here  */
   if(firstString < secondString){
      cout << firstString << " " << secondString << endl;
   }else{
      cout << secondString << " " << firstString << endl;
   }   

   return 0;
}
