function FirstFactorial(num) {
	if (num > 0) {
			return num * FirstFactorial(num - 1);
	} else {
			return 1;
	}
}
   
// keep this function call here 
FirstFactorial(readline());