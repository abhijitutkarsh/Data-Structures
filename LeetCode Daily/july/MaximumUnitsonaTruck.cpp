    bool sortcol( vector<int>& v1, vector<int>& v2)
{
    return v1[1] > v2[1];
}

class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        
        
        sort(box.begin(), box.end(), sortcol);
        
        int res=0;
        
        for(int i =0 ; i<box.size() ;i++)
        {
            if(truckSize <= box[i][0]) //1 trucksize
            {
                res+= truckSize*box[i][1];
                break;
            }
            
            if(truckSize > box[i][0]){
           res+= box[i][0]* box[i][1];
            }
                       truckSize = truckSize - box[i][0];

        }
        return res;
    }
};