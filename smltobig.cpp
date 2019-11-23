//smallest to largest

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int ARRAYSIZE[20];
 int i, number;

 //in a loop that runs for no more than ARRAYSIZE times
 for (i = 0; i < 20; i++) 
  {
    //lol a priori weirdness :re checking number/declaring number
    //breakout @ 0
      do {
      if (number == 0)
      {
       break;
      }      
    cout << "regret this" << endl;
    cout << "gimme int" << endl;
    cin >> number;
    cout << "regreted that" << endl; 
    }
    while(number !=0);
 }

 cout << "what it will do" << endl;
return 0;
}
