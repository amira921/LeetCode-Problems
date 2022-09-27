class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        
        unordered_map <char,int> hash;
        for(auto x:s) hash[x]++;
        
        int longest = 0;
        for(auto x:hash){
            if(x.second %2 == 0) longest += x.second;
            else{
                if(x.second > 1) longest += (x.second - x.second%2);
            }
        }
        
        if(s.size()>longest) return longest+1;       
        return longest;
    }
};