TLE
//using dp
// class Solution {
// public:
//     int numMatchingSubseq(string s, vector<string>& words) {
        
//         int ans = 0 ;
        
//         for(int i = 0 ; i< words.size() ; i++)
//         {
//             int indx = 0;
//             int windx = 0;
//             vector<vector<int>>dp(s.length() , vector<int>(words[i].length(),-1));
//             if(helper(indx, windx, words[i], s,dp))
//             {cout<<words[i]<<endl;
//                 ans++;
//             }
//         }
//         return ans;
//     }
    
//     bool helper(int i , int j,string words,string s , vector<vector<int>>&dp)
//     {
//         if(j == words.length() and i== s.length())return true;
//         if(i== s.length() and j!=words.length()) return false;
//         if(i< s.length() and j==words.length()) return true;

//          bool ans = false;
        
//         if(dp[i][j] != -1) return dp[i][j];
//         if(j != words.length())
//          {
//             if(s[i] == words[j])
//             {     ans = helper(i+1, j+1 , words, s,dp);
//             }
//              else
//             ans = helper(i+1,j,words,s,dp);
//         }
//         return dp[i][j]=ans;
//     }
// };
// using algo technique
    int numMatchingSubseq(string s, vector<string>& words) {
        
        vector<vector<int>>character(26);
        int count = 0;
        for(int i =0 ; i<s.length() ; i++)
            character[s[i] -'a'].push_back(i);
        
        for(int i=0 ; i<words.size() ; i++)
        {
            int last = -1;
            int flag =1; 
            for(auto x: words[i])
            {
                auto it = upper_bound(character[x - 'a'].begin() , character[x - 'a'].end() , last);
                
                if(it == character[x - 'a'].end())
                {
                    flag = 0;
                    break;
                }
                else
                    last = *it;
            }
            if(flag)count++;
        }
        return count;
    }