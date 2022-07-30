class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        vector<string>res;
        
        vector<int>ch(26);
        
        for(auto word: words2)
        {
            vector<int>letter(26,0);
            
            for(int i = 0 ;i<word.length() ; i++)
            {
                letter[word[i] - 'a']++;
                
            }
            for(int i =0 ; i<26 ; i++)
                ch[i] = max(ch[i] , letter[i]);
        }
        
        
       for(auto word : words1)
       {
           vector<int>temp(26,0);
           for(int i =0 ; i<word.length() ; i++)
           {
               temp[word[i] - 'a']++;
           }
           if(subset(temp,ch))res.push_back(word);
       }
        return res;
    }
    
    
    bool subset(vector<int>temp, vector<int>ch)
    {
        for(int i =0 ; i<26 ; i++)
        {
                // cout<<ch[i]<<" "<<temp[i] <<endl;
            if(ch[i] > temp[i])
            {
            return false;
            }
            }
        return true;
    }
};