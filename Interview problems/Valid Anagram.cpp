class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return 0;
        
        unordered_map <char,int>hash_s,hash_t;
        
        for(auto ss: s) hash_s[ss]++;
        for(auto tt: t) hash_t[tt]++;
        
        if (hash_t == hash_s)return 1;
        return 0;
    }
};