https://www.youtube.com/watch?v=35KHuCy7uqk&t=2s

int binarySearch(int arr[], int n)
{
  int left = 0 , right =n-1 ;
  
  while(left <= right)
  {
    int mid = (left + right)/2;
    
    if(arr[left] <= arr[right])
      return left;
    else if(arr[(mid-1+n)%n] > arr[mid] and arr[(mid+1)%n] >arr[mid] )
      return mid;
    else if(arr[mid] < arr[right])
      right =mid-1;
    else
      left = mid+1;
  }
  return -1;
}

int rotationCount(int arr[], int size) {
  // Write your code here
  return binarySearch(arr, size);  
}