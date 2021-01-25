#include <iostream>

using namespace std; //standard library -- has everything you need for input/output

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  const int MAX_NUMBER_OF_INTEGERS = 10; //declares and assigns a constant representing the max number of integers to be entered by user
  int numberArray[MAX_NUMBER_OF_INTEGERS]; //declares array with size set to max number of ints constant
  int currentInt; //changes everytime input is given, stores current value in array
  bool positiveInt; //tests whether input is valid (>0)
  int getAnotherInput = 1; //bool in int form (1 vs 0) to determine whether another input is necessary
  int intsEntered = 0; //variable to keep track of how many ints entered

  while (getAnotherInput == 1 && intsEntered < 10) //loop continues taking input until 10 numbers entered or user is done
  {
    positiveInt = false; //sets boolean to false, allows for second loop which goes until a positive int is entered

    while (positiveInt == false) //makes sure input is positive, continues until so
    {
      cout << endl << "Enter nonnegative integer: "; //prompts user for integer
      cin >> currentInt; //stores input into currentInt variable

      if (currentInt > 0) //if input positive...
      {
        positiveInt = true;
        numberArray[intsEntered] = currentInt; //current int is added to array
        intsEntered++; //increment number of integers entered
      }
      else //if no positive input, do it again
      {
        positiveInt = false;
      }
    }

    cout << endl << "Would you like to enter another integer? (1 = yes, 0 = no)? "; //asks if user wants to continue inputting
    cin >> getAnotherInput;

  }

  cout << endl << "----------" << endl;

  for (int i = 0; i < intsEntered; ++i) //loop to print integers entered
  {
    cout << endl << "Integer " << i + 1 << ": " << numberArray[i] << endl;
  }

  cout << endl;

  return 0;
}
