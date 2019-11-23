//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int ARRAYSIZE[20];
 int i, usrInput, numberIndex, numberArray[20];
 numberIndex = 0;
 //in a loop that runs for no more than ARRAYSIZE times
 for (i = 0; i < 20; i++) 
  {
    cout << "gimme int" << endl;
    
     //put the number into numberArray
    cin >> usrInput;
    cout << "numberIndex is " << numberIndex;
  
     
    numberIndex++; //increments row position (starting at 0)
    if (usrInput == 0) //if usrInput is 0 gtfo
      {
      break;
      }
  
   numberArray[numberIndex] = usrInput;    
   cout << "ugh" << endl; 
   }

  cout << "qa print" << endl; 
//qa to print all values 
  for (i = 0; i < 20; i++)
  {
  cout << numberArray[i] << endl;

  }
 cout << "what it will do" << endl;
return 0;
}
