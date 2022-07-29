/*
 * Complete the function 'addDigitByDigit'
 * @params
 *   a,b,c => numbers which are to be added
 * @return
 *  sum of the three numbers added digit by digit
 */
int addDigitByDigit(int a,int b,int c){
  
  int sum=0, carry = 0, place = 1;
  while(a || b || c)
  {
    int x = a%10 + b%10 + c%10 + carry;
    
    carry = x/10;
    x = x%10;
    
    sum += x*place;
    place = place * 10;
    
    a = a/10;
    b = b/10;
    c = c/10;
    
   }
// Time Complexity: O( LogBase10(max(a, b, c)) )

// Space Complexity: O(1)
  if(carry) sum+= carry *place;
  return sum;
}