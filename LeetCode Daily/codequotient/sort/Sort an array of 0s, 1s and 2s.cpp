// Do not print anything, just sort the given array itself
https://www.youtube.com/watch?v=3wN3DrxdEVU

void sorting012Array(int a[], int n) {
  // Write your code here
  int b[3]= {0,0,0};
  for(int i = 0 ; i<n ; i++)
  {
    b[a[i]]++;
  }
  int j =0;
while(b[0]--)
  {
    a[j++]=0;
  }
while(b[1]--)
  a[j++]=1;
while(b[2]--)
  a[j++]=2;
}