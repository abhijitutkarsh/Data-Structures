class Solution {
public:
    
    void merge(int left , int mid, int right , vector<pair<int,int>>&v, vector<int>&count)
    {
        vector<pair<int,int>>temp(right- left +1);
        
       int i = left;
        int j =mid+1;
        int k=0;
        
        while(i<=mid and j<=right)
        {
            if(v[i].first <= v[j].first)
                temp[k++] = v[j++];
            else
            {
                count[v[i].second] += right -j +1;
                temp[k++] = v[i++];
            }
        }
        while(i<=mid)
            temp[k++]= v[i++];
        while(j<=right)
            temp[k++]= v[j++];
        
        for(int i =left; i<=right ; i++)
            v[i] = temp[i - left];
        
    }
    
    void mergesort(int i, int j, vector<pair<int,int>>&p, vector<int>&count)
    {
      if(i >= j)
        {
            return;
        }
        int middle = i + ((j-i)/2);
        
        mergesort(i, middle, p,count);
        mergesort(middle+1, j, p, count);
        
        merge(i, middle, j, p , count);
        
        return ;
    }
   
    
    
    vector<int> countSmaller(vector<int>& nums) {
        
        vector<pair<int,int>>p;
        
        for(int i =0; i<nums.size(); i++)
        {
            p.push_back({nums[i],i});
        }
        vector<int>count(nums.size(),0);
        
        mergesort(0, nums.size()-1, p, count);
        
        return count;
//         vector<int>ans;
//         for(int i =0 ; i<nums.size();i++)
//         {
//             int count = 0;
//             for(int j =i+1 ; j<nums.size() ; j++)
//             {
//                 if(nums[i] > nums[j])
//                     count++;
//             }
//             ans.push_back(count);
//         }
//         return ans;
    }
};