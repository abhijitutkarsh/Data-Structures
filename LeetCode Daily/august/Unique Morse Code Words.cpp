class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string a[27] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string>s;
        
        for(int i =0 ; i<words.size() ;i++)
        {
            string cur = "";
            for(auto c : words[i])
            {
                cur += a[c - 'a'];
            }
            s.insert(cur);
        }
        return s.size();
    }
};