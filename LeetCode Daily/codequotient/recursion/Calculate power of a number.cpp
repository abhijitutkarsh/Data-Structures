int power(int num, int pow){
  if(pow < 0) return -1;
  if(pow == 0)
    return 1; 
  
  if(pow%2==0)
    return power(num,pow/2)*power(num,pow/2);
  else
    return num* power(num,pow/2)*power(num,pow/2);
}