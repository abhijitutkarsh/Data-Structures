class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int,int>mp;
        for(int i =0 ; i<arr.size() ; i++)
            mp[arr[i]]++;
        
        vector<int>val;
        
        for(auto [_,m]:mp)
        {
            val.push_back(m);
        }
        
        sort(val.begin(), val.end());
        
        int count = 0;
        int ans = 0;
        int i=val.size()-1;
        while(ans < arr.size()/2)
        {
            count++;
            ans+= val[i];
        i--;
        }
        return count;
        
    }
};