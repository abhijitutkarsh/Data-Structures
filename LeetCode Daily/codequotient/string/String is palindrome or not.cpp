// Return true if the string is palindrome, else return false
bool isPalindrome(string str) {
  int left =0 , right = str.length()-1;
  while(left<right)
  {
    if(str[left] != str[right])
      return false;
    left++;
    right--;
  }
  return true;
}