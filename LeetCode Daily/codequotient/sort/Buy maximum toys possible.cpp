https://www.youtube.com/watch?v=JSP_WfhUhpk&feature=emb_imp_woyt

int maxToys(int cost[], int n, int X) {
	// Write your code here
  sort(cost, cost+n);
  int sum=0;
  int i;
  int count =0 ;
  for(i=0 ; i<n ; i++)
  {
    if(sum+cost[i]<=X)	
    {sum+=cost[i];
     count++;}
    else break;
  }
  return i;
}