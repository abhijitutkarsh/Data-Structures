class Solution {
public:
// O(n^2 log n)
//        int kthSmallest(vector<vector<int>>& matrix, int k) {
        
//         priority_queue<int>pq;
        
//         for(int i =0 ; i<matrix.size() ;i++)
//         {
//             for(int j =0 ; j<matrix[0].size(); j++)
//             {
//                 pq.push(matrix[i][j]);
//                     if(pq.size() > k)
//                         pq.pop();
//             }
//         }
//         return pq.top();
    // }
    // A = highest - lowest
    // O(log A *n *log n)
    int binarySearch(vector<vector<int>>&m, int k)
    {
        
        int l = m[0][0] , r = m[m.size()-1][m.size()-1];
        int ans=0;
        while(l<=r)
        {
            int mid = l+ (r-l)/2;
            int count=0;
             // count = check(m,m.size(),mid);
            for(int i =0 ; i<m.size() ; i++)
            count += upper_bound(m[i].begin(), m[i].end() , mid) - m[i].begin(); 

            
            if(count >= k)
            {ans= mid;
                r = mid-1;}
            else
                l =mid +1;
        }   
        return ans;
    }
    
    int check(vector<vector<int>>&m, int n, int target)
    {
        int cur_row = n-1 , cur_col =0 ;
        int c= 0;
        while(cur_row>=0 and cur_col<n)
        {
            if(m[cur_row][cur_col] <= target)
            {c+= (cur_row+1);
                cur_col++;}
            else
                cur_row--;
        }
        return c;
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
       
        return binarySearch(matrix,k);
    }
};