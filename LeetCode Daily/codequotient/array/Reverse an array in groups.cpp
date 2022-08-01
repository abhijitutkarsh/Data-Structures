int* reverseSubarray(int a[], int n, int k) {
  // Write your code here
 // int temp[n];
  for(int i = 0 ; i<n ; i+=k)
  {
    int j=i, l=(i+k-1)%n;
    while(j<l)
    {
      if(j==l) break;
      int temp = a[j];
      a[j] = a[l];
      a[l] = temp;
      j++; l--;
    }
  }
  return a;
}