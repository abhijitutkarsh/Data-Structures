// I have all the thought process build of the final code so consider to see every one 
// to understand how i got there

//Simple recursive
// class Solution {
// public: 
//     int idealArrays(int n, int maxValue) {
        
        
//         long long ans = 0;
        
//         for(int i =1 ; i<=maxValue ; i++)
//         {
//             ans += helper(n, maxValue, 1, i);
//         }
//         return ans;
//     }
    
//     int helper(int n, int maxValue ,int indx,int val)
//     {

//         if(indx == n) return 1;
        
//         long long j =1;
        
//         long long ans = 0;
        
//         while(val*j <= maxValue)
//         {
//            ans += helper(n, maxValue, indx+1 , val*j);
//             j++;
//         }
//         return ans;
//     }
// };


// after applying dp and modulo for optimization
// class Solution {
// public: 
//     int mod = 1000000007;
//     int idealArrays(int n, int maxValue) {
        
//         vector<vector<int>>dp(n+1,vector<int>(maxValue+1,-1));
        
//         long long ans = 0;
        
//         for(int i =1 ; i<=maxValue ; i++)
//         {
//             ans += helper(n, maxValue, 1, i, dp)%mod;
//         }
//         return ans%mod;
//     }
    
//     int helper(int n, int maxValue ,int indx,int val, vector<vector<int>>&dp)
//     {

//         if(indx == n) return 1;
        
//         long long j =1;
        
//         if(dp[indx][val] != -1) return dp[indx][val];
        
//         long long ans = 0;
        
//         while(val*j <= maxValue)
//         {
//            ans += helper(n, maxValue, indx+1 , val*j,dp)%mod;
//             j++;
//         }
//         return dp[indx][val] = ans%mod;
//     }
// };



// So here also the number of operations were really large 
// as so 111111....10^4 
// only for 1
// so what we done is we ignore these 1's or 2's or any repeated numbers
// i.e., considering only unique numbers... which is 1 2 4 8 16....10^4
// which will be approx 14 operations and we will take it 15 for best
// ...other problem is if let say 
// n=1000 and maxval is 16
// then 1 2 4 8 16 it will stop 
// which it shouldn' t be
// since total characters should be 1000
// in that case we will consider a approach
// and find its ncr ie n= 1000-1 and r=indx-1 which is the elements total . ..-1 is since we
// will put elements as 1 | 2|4|8|16 ....we will put it in place of bars as in 11112224444888816...10^4

// code is following


// optimied
class Solution {
public: 
    int mod = pow(10,9)+7;
    int Comb(int n, int k , vector<vector<int>>&memo)
    {
        if(k==0) return 1;
        if(n==0) return 0;
        
        if(memo[n][k] != 0) return memo[n][k];
        
        memo[n][k] = Comb(n-1,k,memo) + Comb(n-1, k-1, memo);
        memo[n][k] %= mod;
        return memo[n][k];
    }
    
    int idealArrays(int n, int maxValue) {
        
        vector<vector<int>>dp(15,vector<int>(maxValue+1,-1));
        vector<vector<int>>memo(n+1,vector<int>(15,0));
        
        long long ans = 0;
        
        for(int i =1 ; i<=maxValue ; i++)
        {
            ans += helper(n, maxValue, 1, i, dp,memo)%mod;
        }
        return ans%mod;
    }
    
    int helper(int n, int maxValue ,int indx,int val, vector<vector<int>>&dp , vector<vector<int>>&memo)
    {

        if(indx == n) return 1;
        
        long long j =2;
        
        if(dp[indx][val] != -1) return dp[indx][val];
        
        long long ans = 0;
        
        bool flag =0;
        while(val*j <= maxValue)
        {
           ans += helper(n, maxValue, indx+1 , val*j,dp,memo)%mod;
            j++;
            
            if(val*j > maxValue)
                ans+= Comb(n-1,indx-1,memo)%mod;
            flag =1;
        }
        
        if(flag == 0)
        {
            if(val*j > maxValue)
                ans+= Comb(n-1, indx-1, memo)%mod;
        }
        
        return dp[indx][val] = ans%mod;
    }
};