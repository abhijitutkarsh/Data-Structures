class Solution {
public:
//     O(n) space O(n)
    bool isAnagram(string s, string t) {
//         map<char,int>mp,mp1;
        
//         if(s.length() != t.length()) return false;
        
//         for(int i =0 ;i<s.length() ;i++)
//         {
//             mp[s[i]]++;
//             mp1[t[i]]++;
//         }
        
//         for(int i = 0 ; i<s.length() ; i++)
//         {
//            if(mp[s[i]] != mp1[s[i]])return false;
//         }
//         return true;
    // }
    // O(n) space O(1)
                if(s.length() != t.length()) return false;

        vector<int>arr(26,0);
        
        for(int i=0 ; i<s.length() ; i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--; 
        }
        for(int i = 0 ;i <arr.size() ; i++)
        {
            if(arr[i] != 0) return false;
        }
        return true;
    }
};