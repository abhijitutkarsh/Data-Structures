void printSpiral(int a[ROWS][COLS], int r, int c) {
  int left=0, right=c-1, top=0, down = r-1;
  int d = 1;
  while(left<=right and top<= down)
  {
    if(d ==1)
    {
      for(int i=left ; i<=right ; i++)
        cout<<a[top][i]<<endl;
      top++;
      d=2;
    }
    else if(d==2)
    {
      for(int i = top; i<=down ; i++)
        cout<<a[i][right]<<endl;
      right--;
      d = 3;
    }
    else if(d==3)
    {
      for(int i = right; i>=left ; i--)
        cout<<a[down][i]<<endl;
      down--;
      d=4;
    }
    else if(d==4)
    {
      for(int i = down ; i>=top; i--)
      cout<<a[i][left]<<endl;
      left++;
      d=1;
    }
  }
}