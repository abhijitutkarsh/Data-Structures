class Solution {
public:
    #define mod 1000000007
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        map<long long, long long>mp;
        
        for(long long i =0 ; i<arr.size() ; i++)
        {
            mp[arr[i]]= 1;
        }
        
        for(int i = 1 ; i<arr.size() ; i++)
        {
            for(int j = i-1 ; j>=0 ; j--)
            {   
                int rig = arr[i]/arr[j];
                    if(rig*arr[j]==arr[i] and mp[rig]){
                        mp[arr[i]] = (mp[arr[i]] + (mp[arr[j]] * mp[rig]))%mod;
                      
                    }
            }
        }
        int sum =0;
        for(long long i =0 ; i<arr.size() ; i++)
             sum=(sum+mp[arr[i]])%mod;
        
        return sum;
    }
};