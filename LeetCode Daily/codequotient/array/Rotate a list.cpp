#include <bits/stdc++.h>

// Include headers as needed

using namespace std;
void rotate(vector<int>&temp, vector<int>&a , int n , int r)
{
  for(int i =0 ; i<n ; i++)
  {temp[i] = a[(i+r)%n];
  }
}
  int main()
{
    // Write your code here
int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i =0 ; i<n ;i++)
        cin>>a[i];
      int r;
      cin>>r;
      vector<int>temp(n,0);
      rotate(temp, a, n, r);
      int i;
      for( i =0 ; i<n-1 ; i++)
      {  cout<<temp[i]<<" ";
      }
      cout<<temp[i];
 cout<<endl;
    }
    // Return 0 to indicate normal termination
    return 0;
}
