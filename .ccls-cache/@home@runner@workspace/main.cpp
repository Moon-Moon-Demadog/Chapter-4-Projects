// This program is going to calculate shipping costs
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  long miles;
  double weight;
  double charge = 0.0;
  cout<< "To accurately calculate your total charge to ship your package, I'll need some";
  cout<< "information. :" << endl;
  cout<< setw (5) << "In kilograms, how much does your package weight."<< endl;
  cout<< "\n";
  cout<< "x" << endl;
cin>> weight;  
   if (weight <= 0 || weight > 20){
     cout<< "I'm sorry, Fast Freight Shipping limits package to 20kgs or less and they must weigh more than 0kgs." << endl;
     return 1;}
  cout<< "How many miles does your package need to go:  " << endl;
  cin>> miles;
  if (miles < 10 || miles >3000){
    cout<< " I'm sorry, Fast Freight Shipping's radius is a minimum of 10 miles and a max of 3,000.";
  return 1;}
  
 cout<< "Okay great, we're shipping your package :" << miles << " miles." << endl;
 cout<< "Okay, we're shipping a package weighing: " << weight << " kgs."<< endl; 
    if (weight <= 2) {
      charge = 1.10;
    }else if ( weight <= 6){
      charge = 2.20;
    }else if ( weight<= 10) {
      charge = 3.70;
    }else if (weight <= 20){
      charge = 4.80;
    }
double numMileBlocks = static_cast<double>((miles + 499) / 500);
 double TotalCharges = numMileBlocks * charge;
  cout<< setw (5) << "Your total amount due to ship your package " << miles << " miles, is : $" << TotalCharges << "0" << endl;
  return 0;
  }
