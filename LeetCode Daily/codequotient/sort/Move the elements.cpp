https://www.youtube.com/watch?v=Kmlyd0pnUyU&feature=emb_imp_woyt

#include <stdio.h>
void swap(int *x, int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
}
 
void moveElements(int arr[], int n){
   for (int i=0; i<n; i++){
       if (arr[i] >= 0){
           for (int j=i; j>0; j--){
               if (arr[j-1] < 0)
                   swap(&arr[j], &arr[j-1]);
               else
               break;
           }
       }
   }
}
int main() {
   int arr[] = {-6, -9, 3, 4, -7, 2};
   int n = sizeof(arr) / sizeof(arr[0]);
   moveElements(arr, n);
   for (int i = 0; i < n; i++)
       printf("%d ", arr[i]);
   return 0;
}
