//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;
void printVals(int i, int numberArray[20], int inputCount, int nVal);

int main()
{
 int ARRAYSIZE[20];
 int i, usrInput, eOLine, inputCount, numberIndex, nVal, numberArray[20];
 numberIndex = 0;
 //in a loop that runs for no more than ARRAYSIZE times
  nVal = 0; 
  inputCount = 0;
// cout << "this is what it will do" << endl;
//this loops produces an array out of user requests, records positive vals
for (i = 0; i < 20; i++) 
  {
    cout << "gimme int" << endl;
     //put the number into numberArray
    cin >> usrInput;    
    inputCount = inputCount + 1; 
    if (usrInput == 0) //if usrInput is 0 gtfo
      {
      break;
      }
    
    if (usrInput != 0 | usrInput < 0)
       {
         numberArray[numberIndex] = usrInput;     
         numberIndex++; //increments row position (starting at 0)
       }
    
    if (numberArray[i] >= 0)
      {
      nVal = nVal + 1;
      }
    //passing the array into printvals sucks
  }

//for the ordinal length of the array, traverse and swap
    for (i = 0; i < nVal - 1; i++)
    {
      //if the current number > next number
      if (numberArray[i] > numberArray[i + 1])
      {
      // cout << numberArray[i] << " > " << numberArray[i + 1] << endl;
//       numberArray[i] = numberArray[i + 1];   

//      cout << "i + 1 is " << i + 1 << endl;
      } 
    }

    printVals(i, numberArray, inputCount, nVal); 
return 0;
}

void printVals(int i, int numberArray[], int inputCount, int nVal)
{
  cout << endl;
 // cout << "int i" << i << endl;  //we use i 2-3 times, might need better context
  cout << "inputCount" << inputCount << endl;
  cout << "nval is " << nVal << endl;
  cout << "there are x number of values: ";
  for ( i = 0; i < nVal; i++)
  { 
     cout << numberArray[i] << ", ";
     //when we reach the end of the list, endl
     if (i == nVal - 1)
     {
      cout << endl;
     }
  }
};
