// This program will tell users how many days are in each month
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int leapyear= 0, month, days = 0;
  const int leapDays = 29;
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
    cout<< "That's a leap year!"<< leapDays << endl;
  } else {
    cout<< "That's not a leap year!"<< days << leapyear << endl;
  }
  return 0;
}