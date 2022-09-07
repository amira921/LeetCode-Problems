class Solution {
public:
    int maxPower(string s) {
        if (s.size()==1)return 1;
        int con = 0;
        int count = 0;

        for (int i=1;i<s.size();i++){
            if (s[i]==s[i-1])con++;
            else con=0;
            count = max(con+1,count);
        }
        return count;
    }
};