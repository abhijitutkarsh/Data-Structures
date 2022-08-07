class Solution {
public:
    map<int, vector<int>>mp = {{'a',{'e'}}, {'e',{'a','i'}},{'i',{'a','e','o','u'}},
                                {'o',{'i','u'}},{'u',{'a'}}
                               };

    long long dp[100001][27];
    int mod = 1e9 + 7;
    int dfs(int n, int i, char c)
    {
        if(i>n) return 0;
        if(i==n)
        {
         switch(c)
         {
                 case 'a' : return 1;
                 case 'e' : return 2;
                 case 'i' : return 4;
                 case 'o' : return 2;
                 case 'u' : return 1;
                 default  : return 5;
         }
        }  
        if(dp[i][c - 'a']!=-1) return dp[i][c-'a'];
        long long res = 0;
        for(auto m: mp[c])
        {
            res+= (dfs(n,i+1, m)%mod);
        }
        return dp[i][c - 'a'] = res%mod;
    }
    
    int countVowelPermutation(int n) {
        memset(dp,-1,n*27*sizeof(long long));
        
        mp['y'] = {'a','e','i','o','u'};
        return dfs(n,1,'y');
    }
    
};