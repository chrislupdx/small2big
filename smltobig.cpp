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
   //what is nVal - inputCount and why are we doing it 
    for (i = 0; i < nVal - 1; i++)
    {
    eOLine = inputCount;
    cout << eOLine << "is eOLine" << endl;
    if (numberArray[i] > numberArray[i + 1])
      {
          if ( i + 1 >= eOLine)
          {
          cout << "i + 1 >= eoLine" << endl;
            break;
          }     
          //how do we detect end of line?
     //do we need holidng vars to retain consistency
          numberArray[i] = numberArray[i + 1];
    //      cout << "numberArray[" << i << "] is: " << numberArray[i] << endl;
          numberArray[i + 1] = numberArray[i];
    //      cout << "numberArray[" << i << "+1] is: " << numberArray[i + 1] << endl; 
       } 
    }

    printVals(i, numberArray, inputCount, nVal); 
return 0;
}

void printVals(int i, int numberArray[], int inputCount, int nVal)
{
  cout << endl;
  cout << "int i" << i << endl;
  cout << "inputCount" << inputCount << endl;
  cout << "nval is " << nVal << endl;
  cout << "there are x number of values: ";
  for ( i = 0; i < inputCount - 1; i++)
  {
   cout << numberArray[i] << ", ";
  }
};
