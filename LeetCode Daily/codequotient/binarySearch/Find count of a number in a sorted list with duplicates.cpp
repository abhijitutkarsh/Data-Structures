#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int binarySearch(int v[], int n, int b)
{
  int left = 0 , right = n-1;
  while(left <= right)
  {
    int mid = left+ (right- left)/2;
    if(v[mid] == b)
    {
      if(mid-1 >= left and v[mid-1] == b)
       right = mid-1;
    else  return mid;
    }
    else if(v[mid] < b)
      left = mid+1;
    else
      right = mid-1;
  }
  return -1;
}

int binarySearch1(int v[], int n, int b)
{
  int left = 0 , right = n-1;
  while(left <= right)
  {
    int mid = left+ (right- left)/2;
    if(v[mid] == b)
    {
      if(mid+1 <= right and v[mid+1] == b)
       left = mid+1;
    else  return mid;
    }
    else if(v[mid] < b)
      left = mid+1;
    else
      right = mid-1;
  }
  return -1;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,b;
    cin>>n>>b;
    int v[n];
    for(int i =0 ; i<n ; i++)
    {
      cin>>v[i];
    }
    int index = binarySearch(v, n,b );
    int index1 = binarySearch1(v,n,b);
    int count =  index1 - index +1;
    if(index == -1){cout<<0<<endl; continue;}
    if(index1 == -1){cout<<0<<endl; continue;}
    
    int i = index;
    
    
    cout<<count<<endl;
  }
   return -1;
}