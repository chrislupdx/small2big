//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;
void printVals(int numberArray[20], int nVal);
int swapVals(int& first, int& second);

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

  //iterate through the array 
  for (i = 0; i < nVal -1; i++)
  {
   int arrVPlus = numberArray[i + 1];
   int arrV = numberArray[i]; 
   
//   cout << "arrV b4 " << arrV << endl;
//   cout << "arrVP b4 " << arrVPlus << endl;

//   cout << "i before " << numberArray[i] << endl;
//   cout << "i+1 before " << numberArray[i + 1] << endl;

//   swapVals(arrV, arrVPlus);   
     swapVals(numberArray[i], numberArray[i + 1]);

//apparently we forgot how to assign things into arrays
//  numberArray[i] = arrVPlus;
//  numberArray[i + 1] = arrV;

//    cout << "arrV after " << arrV << endl;
//    cout << "arrVP after " << arrVPlus << endl;
    

//    cout << "i after" << numberArray[i] << endl;
//    cout << "i+1 after" << numberArray[i + 1] << endl;

 }  
 
 printVals(numberArray , nVal);
 return 0;
}

int swapVals(int& first, int& second)
{
//    cout << "first before " << first << endl;
//    cout << "second before " << second << endl;
   int first1 = first;
   int second1 = second;
   
  if (first > second)
  {    
    first = second1;
    second = first1;
//    cout << "first after " << first << endl;
//    cout << "second after " << second << endl;
   return 1;
  }
  else
  {
  return 0;
  } 
}

void printVals(int numberArray[], int nVal)
{
  cout << endl; 
 for (int i = 0; i < nVal; i++)
  { 
     cout << numberArray[i];
     if (i != nVal - 1)
     {
      cout << ", ";
     }
     //when we reach the end of the list, endl to prevent junk char
     if (i == nVal - 1)
     {
      cout << endl;
     }
  }
};
