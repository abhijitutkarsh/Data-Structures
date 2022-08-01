https://www.youtube.com/watch?v=8yAI7KYRt6s&t=210s


/*     
 * Complete the 'counterDiagonal' function below.
 * Print the counter diagonal traversal of the matrix, seperated by space
 * @params
 *   mat -> square matrix of size (n x n) 
 *   n -> integer denoting size of square matrix
 */
void counterDiagonal(int mat[N][N], int n) {
   // First we will consider all the diagonals 
  //coming from the the 0th row so 
  
  for(int col =0; col<n ; col++)  //taking column since col will be changing
  {
    int i = 0, j=col;   //i is row and j is column
    while(i<n and j>=0)
    {
      cout<<mat[i][j]<<" ";   //logic is every next diagonal is i+1 and j-1 
      i++;					//so incrementing it
      j--;
    }
  }
//same will be doing for last col fixed and row is changing
    for(int row =1; row<n ; row++)  //taking row since row will be changing
    {							//taking row from 1 since 0 is already done in col
    int i = row, j=n-1;   //i is row and j is row
    while(i<n and j>=0)
    {
      cout<<mat[i][j]<<" ";   //logic is every next diagonal is i+1 and j-1 
      i++;					//so incrementing it
      j--;
    }
  }
}