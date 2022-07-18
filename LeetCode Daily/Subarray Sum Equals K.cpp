class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        for(int i =1 ; i<nums.size(); i++) // created a prefix sum
        {
            nums[i] += nums[i-1];
        }
        
        map<int, int>mp;
     
        int ans = 0;
        for(int i =0 ; i<nums.size();i++)
        {
            if(nums[i] == k) ans++;
            
            int j = nums[i] - k; 
            if(mp.count(j))
                ans+=mp[j];

            mp[nums[i]]++;
            
        }
        return ans;
    }
};