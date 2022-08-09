class Solution {
public:
    
    void reverse(vector<int>&v,int i,int j)
    {
        int left = i;
        int right = j;
        
        while(left< right)
        {
            int temp = v[left];
            v[left] = v[right];
            v[right] = temp;
            left++;
            right--;
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        
        reverse(nums, 0, nums.size()-k-1);
        reverse(nums,nums.size()-k, nums.size()-1);
      reverse(nums, 0, nums.size()-1);

        
    }
};