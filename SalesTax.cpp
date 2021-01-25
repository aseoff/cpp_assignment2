#include <iostream>

using namespace std; //standard library -- has everything you need for input/output


float addTax(float taxRate, float cost) //method that returns cost including tax given cost and tax rate
{
  return cost + (cost * (taxRate/100));
}

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  cout << endl << "Example 1 of addTax function (8% tax, $100 cost): $" << addTax(8, 100) << endl; //Example 1 of method call
  cout << endl << "Example 2 of addTax function (5% tax, $300 cost): $" << addTax(5, 300) << endl << endl; //Example 2 of method call

  return 0;
}
