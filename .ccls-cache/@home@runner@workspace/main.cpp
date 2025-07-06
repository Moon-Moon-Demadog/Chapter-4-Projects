// This program will tell users how many days are in each month
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int month, days = 0;
  const int divisor1 = 100;
  const int divisor400 = 400;
  const int divisor4 = 4;
  long year;
  cout<< "For what month do you want to know the days (1-12):  "<< endl;
  cin>> month;
  if (month < 1 || month >12){
    cout<< "Please enter a month digit between 1 & 12.";
    return 1;
  }

  cout<< "Enter a year:  "<< endl;
  cin>> year;

  if (year <= 0){
    cout<< "Please enter a year greater than 0."<< endl;
  return 1;
  } else if ( year % divisor1 == 0 && year % divisor400 == 0){
    cout<< "That's a leap year!"<<  endl;
  } else if (year % divisor4 == 0){
    cout<< "That's a leap year!"<< endl;
  } else {
    cout<< "That's not a leap year!"<<endl;
  }
 if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
   days = 31;
   
 } else if (month == 2 && ((year % divisor4 == 0 && year % 100 != 0) || (year % divisor400 == 0))) {
   days = 29;
   
 } else if (month == 2){
   days = 28;
   
 } else if (month == 4 || 6 || 9 || 11){
   days = 30;
 }
  cout<< setw (3) << "Days:   " << days << endl;
  cout<< setw (3) << "Year:   " << year << endl;
  
  return 0;
}