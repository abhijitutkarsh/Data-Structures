https://www.youtube.com/watch?v=_fXogocanDQ
#include<stdio.h>

void printArray(int array[], int size){
  int i;
  for (i=0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}

void insertionSort(int array[], int n){
  int i, key, j;
  for (i = 0; i < n; i++){
    key = array[i];
    j = i-1;
    while (j >= 0 && array[j] > key){                     
      // find the correct position of the element
      array[j+1] = array[j];        // shift all lesser elements
      j = j-1;
    }
    array[j+1] = key;           // place the element at position
 
  }
}

int main()
{
  int array[] = {15, 11, 14, 12, 18};
  int n = 5; 
  /* we can calculate the number of elements in an array by using sizeof(array)/sizeof(array[0]).            */
  printf("Un-Sorted array: \n");
  printArray(array, n);     // Unsorted array
  insertionSort(array, n);     // Call the sorting routine
  printf("\nSorted array: \n");
  printArray(array, n);   // Sorted array
  return 0;
}
