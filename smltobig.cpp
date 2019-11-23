//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;
void printVals(int i, int numberArray[20], int inputCount, int nVal);
int swapVals(int& first, int& second);

int main()
{
 int ARRAYSIZE[20];
 int i, greater, less, usrInput, eOLine, inputCount, numberIndex, nVal, numberArray[20];
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
  } 
    //how should we transform the values so swapVals can take them 
    swapVals();
      
return 0;
}

int swapVals(int& first, int& second)
{
//for the ordinal length of the array, traverse and swap
    for (i = 0; i < nVal - 1; i++)
   {
      //if the current number > next number 
      if (numberArray[i] > numberArray[i + 1])
      {
      //store the OG values then swap positions 
      int greater = numberArray[i];
      int less = numberArray[i + 1];
      numberArray[i] = less;
      numberArray[i + 1] = greater; 
     }
    printVals(i, numberArray, inputCount, nVal);
   }
}

void printVals(int i, int numberArray[], int inputCount, int nVal)
{
  cout << endl;
  cout << "inputCount" << inputCount << endl;
  cout << "nval - 1 is " << nVal - 1 << endl;
  cout << "there are " << inputCount -1 << " values: ";
//how do we print the originals, easiest way would be to store it on initialization/hits zero
  for ( i = 0; i < nVal; i++)
  { 
     cout << numberArray[i] << ", ";
     //when we reach the end of the list, endl to prevent junk char
     if (i == nVal - 1)
     {
      cout << endl;
     }
  }
};
