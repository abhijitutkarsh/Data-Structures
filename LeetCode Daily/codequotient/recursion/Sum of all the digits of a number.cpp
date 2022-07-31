#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int sum(int n)
{
  if(n == 0) return 0;
  else
    return n%10 + sum(n/10);
}
int main()
{
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int x = sum(n);
    cout<<x<<endl;
  }
}