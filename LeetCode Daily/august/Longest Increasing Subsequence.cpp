class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
//         int ans =1;
//         vector<int>dp(nums.size()+1,1);
//             for(int i =1 ; i<nums.size() ; i++)
//             {
//                 for(int j =i-1 ; j>=0 ; j--)
//                 {
//                     if(nums[j]< nums[i])
//                         dp[i]= max(dp[i] , dp[j]+1);
//              ans = max(ans, dp[i]);

//                 }
//             }
//         return ans;
    // }
        
        vector<int>v;
        
        for(int i =0 ; i<nums.size() ; i++)
        {
            auto it = lower_bound(v.begin(), v.end() , nums[i]);
            if(it == v.end()) v.push_back(nums[i]);
            else 
                *it = nums[i];
            
         }
        return v.size();
        
    }
};