// This program is going to calculate shipping costs
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  long miles;
  double weight;
  cout<< "To accurately calculate your total charge to ship your package, I'll need some";
  cout<< "information. :" << endl;
  cout<< setw (5) << "In kilograms, how much does your package weigh:"<< endl;
cin>> weight;  
  if (weight <0 || weight >20)
  {
    cout<< "I'm sorry, Fast Freight Shipping limits package to 20kgs or less and they must weigh more than 0kgs." << endl;
  } else if (weight >0 && weight <= 2) {
    cout<< "Okay, we're shipping a package weighing: " << weight << " kgs."<< endl;}
   else if (weight<6 && weight <2 ) {
     cout<< "Okay, we're shipping a package weighing"
   }
    
  
}