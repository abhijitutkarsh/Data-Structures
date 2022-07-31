#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void recur(int n,int a, int b, int i)
{
  if(i>n)
    return ;
  int c = a+b;
  recur(n, b, c,i+1);

  cout<<c<<endl;
}
int main()
{
  int n;
  cin>>n;
  
  recur(n,0,1,3);
 if(n>=2) cout<<1<<endl;
 if(n>=1) cout<<0<<endl;
   return 0;
}