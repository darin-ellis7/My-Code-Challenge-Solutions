#include <iostream>
using namespace std;

string FirstReverse(string str) { 

  // code goes here
  string copy = str;                    //
  int strlength = str.length();         //
                                        //
  for(int i = 0; i < strlength; i++)    //
  {                                     //
      str[i] = copy[strlength-(1+i)];   //
  }                                     //
  return str;       
}

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
}
