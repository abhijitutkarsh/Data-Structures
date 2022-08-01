https://www.youtube.com/watch?v=UYoGVCtNP54&feature=emb_imp_woyt

#include<bits/stdc++.h>
using namespace std;

int lower(vector<int>&a, int n, int b)
{
  int left = 0, right =n-1;
  
  while(left<=right)
  {
   int mid = left+ (right - left)/2;
     if(a[mid] == b)
     {if(mid-1 >= left and a[mid-1] == b)
       right = mid-1;
   else   
     return mid;
     }
    else if(a[mid] < b )
      left = mid+1;
    else
      right = mid-1;
  }
  return INT_MIN;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,b;
    cin>>n>>b;
    vector<int>a(n);
    
    for(int i=0 ; i<n ; i++)
    {
      cin>>a[i];
    }
   int index = lower(a, n, b);
    if(index == INT_MIN)
       cout<<-1<<endl;
    else
    cout<<index<<endl;
  }
   return 0;
}