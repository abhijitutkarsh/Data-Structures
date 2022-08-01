https://www.youtube.com/watch?v=rcdYplJCb6Q&feature=emb_imp_woyt

int countWords(string str) {
  // Write your code here
  if(str.length() == 0) return 0;
  int count = 1;
  for(int i =0 ; i<str.length(); i++)
  {
    if(str[i] == ' ')
    {
      while(str[i]==' ' and i<str.length())
      {
        i++;
      }
      count++;
      
    }
  }
  return count;
}