// Example program
#include <iostream>
#include <string>
using namespace std; 
int main()
{
  char abcChar[] = {'a','b','c','d','e','f','g','h','i'};
  char possibleString[] = {};
  int length = sizeof(abcChar);
  
  for (int n = 0; n < length; n++)
  {
      possibleString[0] = abcChar[n];
      for (int n = 0; n < length; n++)
      {
          possibleString[1] = abcChar[n];
          
          if (string(possibleString) == "hi" )
          { cout << "done"; break; }
          else
          {
              continue;
          }
          
      }
  }
}
