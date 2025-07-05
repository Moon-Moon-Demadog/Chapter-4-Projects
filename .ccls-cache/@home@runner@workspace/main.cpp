// This program will allow user to calculate basic geometry formulas.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int choice;
  cout<< "Lets factor some Geometry formulas!\n";
  cout<< "Read through the menu below, type your choice and hit enter.\n";
  cout<<  setw (5) << "\n 1.) Area of Circule \n";
  cout<<  setw (5) << " 2.) Area of Rectangle \n";
  cout<<  setw (5) << " 3.) Area of Triangle \n";
  cout<<  setw (5) << " 4.) Quit Program \n";
  cout<< "Enter Here:";
  cin>> choice;

  if (choice == 1)
  {
    const double PI = 3.14159;
    double radius, area;
    cout<< "What is the radius of your circle?\n";
      cout<< "Enter radius here :";
    cin>> radius;
    if (radius <= 0)
    {
    cout << "Enter a number greater than zero and try again.\n";
    }
    double radius_squared = pow(radius, 2.0);
    area = PI / radius_squared;
    cout<< "The area of the circle is: " << area << endl;
  }
  else if (choice == 2)
  {
    double Length, Width;
    cout<< "What is the lenght of your rectangle? \n";
      cin>> Length;
    if (Length <= 0)
    {
      cout<< "Enter a number greater than zero, and try agian. \n";
      
    }
    cout<< "What is the width of you rectangle? \n";
    cin>> Width;
    if (Width <= 0)
    {
      cout<< "Enter a number greater than zero and try agian. \n)";
    }
    double Area = Length * Width;
    cout<< "The area of your rectangle is: " << Area << endl;
  }
  else if (choice == 3)
  {
    double base, height;
    cout<< "What is the base of your triangle? \n?";
    cin>> base;
    if (base <= 0)
    {
      cout<< "Try again, enter a number greater than zero.\n";
    }
    cout
  }
}