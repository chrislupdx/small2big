//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;
void printVals(int numberArray[20], int nVal);
int swapVals(int numberArray[20], int& nVal);

int main()
{
 int ARRAYSIZE[20];
 int i, greater, less, usrInput, eOLine, inputCount, numberIndex, nVal, numberArray[20];
 numberIndex = 0;
  nVal = 0; 
  inputCount = 0;
//this loops produces an array out of user requests, records positive vals
for (i = 0; i < 20; i++) 
  {
    cout << "gimme int" << endl;
     //put the number into numberArray
    cin >> usrInput;    
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
 cout << "there are " << nVal << " chars" << endl;
 swapVals(numberArray, nVal);
return 0;
}
//HOW THE FUCK DO I SWAP THEM WEITHOUT PASSING A GODDAMN ARRAY OR NVAL 
int swapVals(int numberArray[], int& nVal)
{
//create second in this scope
 //for the ordinal length of the array, traverse and swap
 for (int i = 0; i < nVal - 1; i++)
 {
  //if the current number > next number 
  if (numberArray[i] > numberArray[i +1])
  {
  //store the OG values then swap positoins
  int greater = numberArray[i];
  int less = numberArray[i + 1];
  numberArray[i] = less;
  numberArray[i + 1] = greater;
  }
 }
}

void printVals(int numberArray[], int nVal)
{
  cout << endl; 
 for (int i = 0; i < nVal; i++)
  { 
     cout << numberArray[i] << ", ";
     //when we reach the end of the list, endl to prevent junk char
     if (i == nVal - 1)
     {
      cout << endl;
     }
  }
};
