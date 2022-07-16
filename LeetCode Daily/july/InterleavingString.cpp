class Solution {
public:
    int dp[101][101];
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length() , m= s2.length() , s = s3.length();
        memset(dp, -1, sizeof(dp));
        return helper(s1, s2, s3, 0, 0 ,0 );
    }
    
    bool helper(string s1, string s2, string s3, int i , int j, int k)
    {
        if(i == s1.length() and j== s2.length() and k==s3.length())
            return true;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        bool x= false, y = false;
        if(i != s1.length())
        {
            if(s1[i] == s3[k])
            x = helper(s1, s2, s3, i+1, j , k+1);
        }
        if(j != s2.length())
        {
            if(s2[j] == s3[k])
            y = helper(s1, s2, s3, i, j+1 , k+1);
        }
        return dp[i][j] = x|y;
    }
};