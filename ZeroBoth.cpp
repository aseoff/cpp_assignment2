#include <iostream>

using namespace std; //standard library -- has everything you need for input/output


void zeroBoth(int& num1, int& num2) //call by reference parameters, allows for parameters to be replaced by variables in main
{
  num1 = 0; //sets first number to 0
  num2 = 0; //sets second number to 0
}

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  int num1 = 5; //could be any nonzero number
  int num2 = 20; //could be any nonzero number

  cout << endl << "Integer values BEFORE ZeroBoth function called: " << endl;
  cout << endl << num1 << " and " << num2 << endl << endl; //numbers before method call: 5 and 20

  zeroBoth(num1, num2); //call that sets both to 0

  cout << "Integer values AFTER ZeroBoth function called: " << endl;
  cout << endl << num1 << " and " << num2 << endl << endl; //both values now 0

  return 0;
}
