/*
 * Complete the function 'verifyPrime'
 * @params
 *   n ->number which is to be checked from primality test
 *
 * @return
 *   true if the number is a prime number else false
 */
bool verifyPrime(int n) {
    if(n<=1)
		return false;  
  for(int i =2 ; i*i<=n ; i++)
  {
    if(n%i==0) 
      return false;
  }
  return true;
}