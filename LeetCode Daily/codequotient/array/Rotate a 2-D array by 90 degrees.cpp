#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i =0 ; i<n ; i++)
    {
      for(int j= 0 ; j<n ; j++)
      {
        cin>>arr[i][j];
      }
    }
    for(int i=0 ; i<n ; i++)
    {
      int j;
      for( j=n-1; j>=1 ; j--)
        cout<<arr[j][i]<<" ";
      cout<<arr[j][i];
      cout<<endl;
    }
    cout<<endl;
  }
   return 0;
}