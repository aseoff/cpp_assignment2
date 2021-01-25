#include <iostream>
#include <cmath>

using namespace std; //standard library -- has everything you need for input/output


void getInput(float& feet, float& inches) //function using call-by-reference parameters - sets variables in main to these inputs
{
  cout << endl << "Enter number of feet: ";
  cin >> feet;

  cout << endl << "Enter number of inches: ";
  cin >> inches;
}

int calculateMeters(float feet, float inches) //function that calculates meters
{
  return trunc((feet * 0.3048) + (inches * (0.3048/12))); //trunc function truncates the meters float value (removes decimals)
}

float calculateCentimeters(float feet, float inches)
{
  return ((feet * 0.3048) + (inches * (0.3048/12)) - trunc((feet * 0.3048) + (inches * (0.3048/12)))) * 100; //gets the remainder of meters as a decimal and then multiplies by 100 to convert to centimeters
}

void output(float feet, float inches) //function to output conversion
{
  cout << endl << "Conversion: " << calculateMeters(feet, inches) << " meter(s) and " << calculateCentimeters(feet, inches) << " centimeter(s)" << endl << endl;
}

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  float feet;
  float inches;

  getInput(feet, inches); //prompts for input, stores variables
  output(feet, inches); //outputs conversion (calculation methods called within output method)

  return 0;
}
