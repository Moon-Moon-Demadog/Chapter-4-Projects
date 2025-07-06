// This program is going to calculate shipping costs
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  long miles;
  double weight, charge = 0.00;
  cout<< "To accurately calculate your total charge to ship your package, I'll need some";
  cout<< "information. :" << endl;
  cout<< setw (5) << "In kilograms, how much does your package weight."<< endl;
  cout<< "\n";
  cout<< "x" << endl;
cin>> weight;  
  if (weight < 0 || weight > 20)
  {
    cout<< "I'm sorry, Fast Freight Shipping limits package to 20kgs or less and they must weigh more than 0kgs." << endl;
  } else if (weight > 0 || weight <= 2) {
    cout<< "Okay, we're shipping a package weighing: " << weight << " kgs."<< endl; 
  charge = 1.10; }
   else if (weight<= 6 || weight < 2 ) {
     cout<< "Okay, we're shipping a package weighing" << weight << " kgs.";
     charge = 2.20;
   }
  else if (weight > 6 || weight <= 10){
    cout<< "Okay, we're shipping a package weighing" << weight<< " kgs.";
    charge = 3.70;
  } 
    else if (weight > 10 || weight <= 20) {
      cout << "Okay, we're shipping a package weighing" << weight<< " kgs.";
  }
  cout<< "How many miles does your package need to go:  " << endl;
  cin>> miles;
  cout<< "Okay great, we're shipping your package :" << miles << " miles." << endl;
  double TotalMiles = 500 % miles ;
  double TotalCharges = TotalMiles * charge ;
  cout<< setw (5) << "Your total amount due to ship your package " << miles << " miles, is : $" << TotalCharges << " ." << endl;
  return 0;
}