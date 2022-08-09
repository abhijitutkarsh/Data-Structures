class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int i = 0 , j = nums.size()-1;
        vector<int>v(nums.size());
        int k = j;
        while(i<=j)
        {
            if(abs(nums[j]) < abs(nums[i]) )
            { v[k--] = nums[i]*nums[i];
            i++;
            }
            else 
            {   v[k--] = nums[j]*nums[j];
                j--;
            }
        }
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        
        return v;
                

 


        
    }
};      