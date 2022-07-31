/*
 * Complete the function 'factorial' given below
 * @params
 *  n -> an integer whose factorial is to be calculated
 * @return
 *  The factorial of integer n
 */
int factorial(int n){
	int result = 1;
  if(n ==0) return 1;
  else
    result = factorial(n-1) * n;
  return result;
}