using System;

class MainClass {
  public static int FirstFactorial(int num) { 
  
    // code goes here  
    /* Note: In C# the return type of a function and the 
       parameter types being passed are defined, so this return 
       call must match the return type of the function.
       You are free to modify the return type. */
    if (num == 1)
        return 1;
    return num * FirstFactorial(--num);
            
  }

  static void Main() {  
    // keep this function call here
    Console.WriteLine(FirstFactorial(Console.ReadLine()));
  } 
   
}