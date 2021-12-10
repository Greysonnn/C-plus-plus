#include <iostream>
using namespace std;

int main() {
   int hourlyWage;
   int workHoursPerWeek;
   int workWeeksPerYear;
   const int MONTHS_PER_YEAR = 12; 
   int annualSalary;
   int monthlySalary;

   cout << "Enter hourly wage: " << endl;
   cin >> hourlyWage;

   cin >> workHoursPerWeek;
   cin >> workWeeksPerYear;

   annualSalary = hourlyWage * workHoursPerWeek * workWeeksPerYear;
   cout << "Annual Salary is: ";
   cout << annualSalary << endl;
   
   // TODO: Calculate monthlySalary using annualSalary and the modified monthsPerYear const variable
   monthlySalary = annualSalary / MONTHS_PER_YEAR;
   cout << "Monthly salary is: ";
   cout << monthlySalary << endl;

   return 0;
}
