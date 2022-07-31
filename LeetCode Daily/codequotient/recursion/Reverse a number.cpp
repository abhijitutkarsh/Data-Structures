#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int reverse(int n, int i )
{
  if(n==0) return i;
  
  int rem = n%10;
  i = i*10 +rem;
  return reverse(n/10,i);
}
int main()
{
 
    int n;
    cin>>n;
    cout<<reverse(n,0);
  
   return 0;
}