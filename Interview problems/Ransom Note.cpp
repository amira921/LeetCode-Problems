class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hash;
        for(auto x:magazine) hash[x]++;
        
        for(int i=0;i< ransomNote.size();i++){
            if(hash[ransomNote[i]]>0) hash[ransomNote[i]]--;
            else return 0;
        }
        return 1;
    }
};