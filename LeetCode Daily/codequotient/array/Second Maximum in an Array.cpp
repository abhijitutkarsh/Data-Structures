#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<vector>
// Include headers as needed
using namespace std;
	int n;
int sorteq(vector<int>&a)
{
  sort(a.begin(),a.end(), greater<int>());
  for(int i =0 ; i+1<n ; i++)
  {
    if(a[i] != a[i+1])
      return i+1;
  }
  return -1;
}
int main()
{
  cin>>n;
  vector<int>a(n);
  //set<int>a;
  for(int i = 0 ; i<n ; i++)
  {
    cin>>a[i];
  }
int i = sorteq(a);
  if(i!= -1)
  cout<<a[i]<<endl;
 else
   cout<<0<<endl;
    return 0;
}