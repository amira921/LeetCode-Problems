class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++)
           s[i] = tolower(s[i]);

        int i=0 , j=s.size()-1;
        while(i<j){
            bool s_i = (s[i]>='a' && s[i]<='z')|| (s[i]>='0' && s[i]<='9');
            bool s_j = (s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9');  
            
            if((s_i && s_j && s[i]==s[j]) || (!s_i && !s_j)){
                i++;
                j--;
            }
            else if(s_i && s_j && s[i]!=s[j]) return 0;
            else if (s_i && !s_j) j--;
            else if (!s_i && s_j) i++;
        }
        return 1;
    }
};
