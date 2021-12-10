#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int age;
   int weight;
   int heartRate;
   int minutes;
   float calories;
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> minutes;
   
   calories = ((age * 0.2757) + (weight * 0.03295) + ((heartRate * 1.0781) - 75.4991) ) * (minutes / 8.368);
   cout << fixed << setprecision(2);
   cout << "Calories: " <<  calories << " calories" << endl;

   return 0;
}
