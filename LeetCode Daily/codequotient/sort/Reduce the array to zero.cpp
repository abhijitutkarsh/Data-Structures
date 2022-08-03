/*
 * Complete the function below with 1 argument: 
 *   An integer array of positive integers
 *
 * Return an array which denotes the number of elements reduced during ith operation 
 */
https://www.youtube.com/watch?v=x1EIlq79Zbg&feature=emb_imp_woyt

vector<int> reduceArray(vector<int> arr) {
 vector<int>res;
  int n = arr.size();
  sort(arr.begin(), arr.end());
  int i=0;
  while(i<arr.size())
  {
    int j = n-i;
    while(i+1<arr.size() and arr[i]==arr[i+1] )
    {
      i++;
    }
    res.push_back(j);
    i++;
  }
                return res;
}