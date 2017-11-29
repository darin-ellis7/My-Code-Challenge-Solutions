#include <iostream>
using namespace std;

string LetterChanges(string str) { 

  // code goes here   
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == 'z') //handle the wraparound from z to a
    {
        str[i] = 'a';
    }
    else if(str[i] == 'Z') //handle wraparound, this time for capitals
    {
        str[i] = 'A';
    }
    //This approach relies on characters being represented by ASCII values.
    //The integers 97 to 122 represent uppercase characters, while 65 to 90 represent lowercase
    else if((str[i] >= 97 && str[i] < 122) || (str[i] >= 65 && str[i] < 90))
    {
        str[i] = str[i]+1;
    } 
    
    switch(str[i])   //convert vowels to uppercase
    {
        case 'a':
            str[i] = 'A';
            break;
        case 'e':
            str[i] = 'E';
            break;
        case 'i':
            str[i] = 'I';
            break;
        case 'o':
            str[i] = 'O';
            break;
        case 'u':
            str[i] = 'U';
            break;
    }
  }
  //end of my code
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterChanges(gets(stdin));
  return 0;
    
}
