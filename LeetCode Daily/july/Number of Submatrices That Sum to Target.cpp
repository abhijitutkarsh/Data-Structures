// class Solution {
// public:
//     int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
//         int n = matrix.size() , m = matrix[0].size();
        
//         for(int i = 0 ; i<n ; i++)
//         {
//             for(int j = 1 ; j<m ; j++)
//             {
//                 matrix[i][j] += matrix[i][j-1];
//             }
//         }
        
//         int ans = 0;
        
//         for(int i =0 ; i<m ; i++)
//         {
//             for(int j=i ; j<m ; j++)
//             {
//                 for(int k=0 ; k<n ;k++)
//                 {
//                 int sum = 0;
//                     for(int l=k ; l<n ; l++)
//                     {
//                         sum+= matrix[l][j] - ((i) ? matrix[l][i-1]:0);
//                         if(sum == target)ans++;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size() , m = matrix[0].size();
        
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 1 ; j<m ; j++)
            {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        
        int ans = 0;
        
        for(int i =0 ; i<m ; i++)
        {
            for(int j=i ; j<m ; j++)
            {
                int sum = 0;
                map<int,int>mp;
                mp[0] = 1;
                for(int k=0 ; k<n ;k++)
                {
                  
                        sum+= matrix[k][j] - ((i) ? matrix[k][i-1]:0);
                        ans += mp[sum-target];
                        
                    mp[sum]++;
                }
            }
        }
        return ans;
    }
};