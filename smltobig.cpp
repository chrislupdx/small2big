//smallest to largest
//This program takes an array of integers  and sorts them from smallest to biggest
//11/23/19, Chris Lu
//Sources: none

#include <iostream>
#include <iomanip>

using namespace std;

void printVals(int numberArray[20], int nVal);
int swapVals(int& first, int& second);

int main()
{
   int ARRAYSIZE[20];
   int i, x, greater, less, usrInput, eOLine, inputCount, numberIndex, nVal, numberArray[20];
   numberIndex = 0;
   nVal = 0; 
   inputCount = 0;

   cout << "this program sorts an array"
   " up to 20 integers from smallest to largest" << endl;

   //this loops produces an array out of user requests, records positive vals
for (i = 0; i < 20; i++) 
  {
     cout << "gimme an int, exits on 0 input" << endl;
     cin >> usrInput;    
  if (usrInput == 0) //if usrInput is 0 gtfo
      {
      break;
      }
    //puts non-zero, non-negative values into the array 
  if (usrInput != 0 | usrInput < 0)
      {
         numberArray[numberIndex] = usrInput;     
         numberIndex++; //increments row position (starting at 0)
      }
    //counts the number of zero+ values
  if (numberArray[i] >= 0)
     {
        nVal = nVal + 1;
     }
  }
   cout << "there are " << nVal << " values." << endl;
   //The outer loop exists to run the swap for every value in the array 
   for ( x = 0; x < nVal - 1; x++) //apparently if you use i here, it 
    //shares the same scope as i in the inner loop
   {
  //The inner loop exists to run the swap through the entire array with one value
      for (i = 0; i < nVal - 1; i++)
      {
      //swapVals compares if the values of i and i + 1 and swaps them if i is greater
      swapVals(numberArray[i], numberArray[i + 1]);
      }  
    //Prints the array
    printVals(numberArray , nVal);
    }
return 0;
}

int swapVals(int& first, int& second)
{
   //store initial values of first and second
   int first1 = first;
   int second1 = second;
   //if first is greater than second, swap
if (first > second)
   { 
   //we are assigning the value of first to second, and second to first   
   first = second1;
   second = first1;
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
}
