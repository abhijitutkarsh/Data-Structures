void partitionArray(int arr[], int n, int x)
{
  int i, j, temp;
  i = 0;
  j = n-1;
  while (i < j)
  {
    while (arr[i] <=x)
    {i++;
     if(i==j)
     goto k;
    }
    while (arr[j] > x)
    {  j--;
     if(i==j)
    goto k;
    }
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }  
  k:;
}