class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
//         vector<int>ans;
//         int flag =0;
//         for(int i=0 ;i<nums.size(); i++)
//         {
//             if(nums[i] == target)
//             {
//                 ans.push_back(i);
//                 int j;
             
//                 for( j = i+1 ; j<nums.size();j++)
//                 {
//                     if(nums[j]==target)
//                         continue;
//                     else
//                         break;
//                 }
//                 ans.push_back(--j);
//                 flag=1;
//                 break;
//             }
            
//         }
//         if(flag)
//         return ans;
//             else
//                 return {-1,-1};
        /////////////////////
        
        vector<int>ans;
            auto it = lower_bound(nums.begin(),nums.end(), target);
            auto iti = upper_bound(nums.begin(), nums.end(), target);
            
            if(it == iti)
                 return {-1,-1};
                else
            {  ans.push_back(it- nums.begin());
            ans.push_back(iti - nums.begin()-1);
            }
        
           
        return ans;
    }
};