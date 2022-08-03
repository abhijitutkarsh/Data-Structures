https://www.youtube.com/watch?v=Il7R97bz4tg&feature=emb_imp_woyt

#include<bits/stdc++.h>
void removeDuplicates(int arr[], int *size) {
  set<int>s(arr,arr+*size);
  *size = s.size();
int i =0;
  for(auto x:s)
  {
    arr[i++] = x;
  }
}