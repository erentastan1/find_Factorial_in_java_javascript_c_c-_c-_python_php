// code goes here  
  int result = 1;
  for (int i = 1; i <= num; i++) {
      result = result * i;
  }
  printf("%i", result);
  
            
}

int main(void) { 
  
  // keep this function call here
  FirstFactorial(gets(stdin));
  return 0;
    
}