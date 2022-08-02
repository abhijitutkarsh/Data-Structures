#include <stdio.h>
 
void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
 
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)
   {  
       int swapped = 0;
       // last i elements are already at the correct position
       for (int j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
               swap(&arr[j], &arr[j+1]);
               swapped = 1;
           }
       }
       // If no swapping happened in the current pass, then break
       if (swapped == 0)
           break;
   }
}
 
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
 
int main()
{
   int arr[] = {6, 3, 8, 9, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
  
   printf("Given Array: ");
   printArray(arr, n);
  
   bubbleSort(arr, n);
  
   printf("Sorted Array: ");
   printArray(arr, n);
  
   return 0;
}
