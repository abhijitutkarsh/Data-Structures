// print the binary equivalent of the given number 'n'
void decimalToBinary(int n) {
  // Write your Code here
  int i =0 ; 
  int binarybit[32];
  while(n>0)
  {
    binarybit[i] = n%2;
    n=n/2;
    i++;
  }
  for(int j=i-1 ; j>=0 ; j--)
  {
    cout<<binarybit[j];
  }
}