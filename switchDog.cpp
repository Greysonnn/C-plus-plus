#include <iostream>
using namespace std;

/* Estimates dog's age in equivalent human years.
   Source: www.dogyears.com
*/

int main() {
   int dogAgeYears;

   cout << "Enter dog's age (in years): " << endl;
   cin  >> dogAgeYears;

   switch (dogAgeYears) {
      case 0:
         cout << "That's 0..14 human years." << endl;
         break;

      case 1:
         cout << "That's 15 human years." << endl;
         break;

      case 2:
         cout << "That's 24 human years." << endl;
         break;

      case 3:
         cout << "That's 28 human years." << endl;
         break;

      case 4:
         cout << "That's 32 human years." << endl;
         break;

      case 5:
         cout << "That's 37 human years." << endl;
         break;
         
      case 6:
         cout << "That's 42 human years." << endl;
      
      case 7: 
         cout << "That's 48 human years." << endl;
      
      case 8: 
         cout << "That's 55 human years." << endl;
      
      case 9:
         cout << "That's 63 human years." << endl;
      
      case 10:
         cout << "That's 72 human years." << endl;
      
      default:
         cout << "Human years unknown." << endl;
         break;
   }

   return 0;
}
