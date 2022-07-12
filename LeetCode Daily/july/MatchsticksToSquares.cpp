class Solution {
public:
    bool helper(vector<int>v,int idx, vector<int>&matchsticks ,int target)
    {
        if(idx == matchsticks.size())
        {
            if(v[0]==v[1] and v[1]==v[2] and v[2]==v[3])
                return true;
            else
                return false;
        }
        
        
        for(int i =0 ; i<4 ;i++)
        {
            
            if(v[i] + matchsticks[idx]> target)   // optimization 1
                continue;
            
            int j = i-1;        
            while(j >= 0)         //optimization 3
            {
                if(v[j] == v[i])
                {  break;}
                j-=1;
            }
            if(j!=-1)
                continue;
            
            
            
            
            v[i]+=matchsticks[idx];
            
            if(helper(v,idx+1,matchsticks, target))
                return true;
            
            v[i]-=matchsticks[idx];
        }
        return false;
    }
    
    
    
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size() == 0)
            return false;
        vector<int>v(4,0);
        int target=0;
        for(int i=0 ; i< matchsticks.size() ; i++)
            target+= matchsticks[i];
        
        target= target/4;
        sort(matchsticks.begin(), matchsticks.end(), greater<int>()); //optimization 2
        return helper(v,0,matchsticks, target);
    }
};