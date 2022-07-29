void fib_sequence(int n) {
  // Write your code here
  vector<long long>fib(n);
  if(n==0) {
    cout<<0;
    return;
  }
  fib[0]=0;
  fib[1]=1;
	for(int i = 2 ; i<n ; i++)
    {
      fib[i] = fib[i-1]+ fib[i-2];
    }
  for(int i =0 ; i<n ; i++)
  {
    cout<<fib[i]<<endl;
  }
}
