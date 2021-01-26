#include <iostream>
using namespace std;

int FirstFactorial(int num) { 

  // code goes here
  int out = 1;
  for (int i=num; i > 0; i--) {
  	out *= i;
  }
  return out; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
}