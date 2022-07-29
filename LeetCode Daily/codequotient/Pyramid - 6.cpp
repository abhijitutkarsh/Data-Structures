#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int a;
  
  cin>>a;
  
  for(int i =0 ; i<=a ; i++)
  {
    for(int j=i ; j>=1 ; j--)
      cout<<j;
    for(int j=2 ; j<=i ; j++)
      cout<<j;
    cout<<endl;
  }
  
  
   return 0;
}