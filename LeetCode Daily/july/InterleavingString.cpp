class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
    int n= s1.length(), m = s2.length();
        if(n+m != s3.length()) return false;
       
        if(s1 == s3 and m == 0) return true;
                if(s2 == s3 and n == 0) return true;


        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i = 0 ; i<=n; i++)
        {
            for(int j=0 ; j<=m ;j++)
            {
                if(i==0 and j==0)
                    dp[i][j]= 1;
                
                else if(i==0)
                {
                    if(s2[j-1]==s3[j-1])
                        dp[i][j] = dp[i][j-1];
                }
                
                else if(j==0)
                {
                    if(s1[i-1]==s3[i-1])
                        dp[i][j] = dp[i-1][j];
                }
                
                else if(s1[i-1] == s3[i+j-1] and s2[j-1]!=s3[i+j-1] )
                    dp[i][j]= dp[i-1][j];
                
                else if(s1[i-1] != s3[i+j-1] and s2[j-1]== s3[i+j-1])
                    dp[i][j] = dp[i][j-1];
                
                else if(s1[i-1] == s3[i+j-1] and s2[j-1] == s3[i+j-1])
                    dp[i][j] = dp[i][j-1] or dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};
