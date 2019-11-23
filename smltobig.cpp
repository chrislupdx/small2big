//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int ARRAYSIZE[20];
 int i, usrInput, inputCount, numberIndex, nVal, numberArray[20];
 numberIndex = 0;
 //in a loop that runs for no more than ARRAYSIZE times
  nVal = 0; 
  inputCount = 0;
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

  
  cout << "there are x number of values: ";
  for ( i = 0; i < inputCount - 1; i++)
   {
  //the first char of numberArray is zero   
   cout << numberArray[i] << ", ";
   }
  cout << "Inputcount is " << inputCount << endl;
 cout << "what it will do" << endl;
return 0;
}
