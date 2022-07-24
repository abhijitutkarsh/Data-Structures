class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         for(int i =0 ; i<matrix.size() ; i++)
//         {
            
//                 auto it = lower_bound(matrix[i].begin(),matrix[i].end(),
//                                                target);
//             if(it == matrix[i].end()) continue;   
            
//             if(*it == target)return true;
            
//         }
//         return false;
        
        int r = 0, c =matrix[0].size()-1;
        
        while(r <matrix.size() and c>=0)
        {
            if(matrix[r][c] == target)
                return true;
            else if(matrix[r][c] > target) 
                c--;
            else
                r++;
        }
        return false;
    }
};