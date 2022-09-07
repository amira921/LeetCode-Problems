class Solution {
public:
    int check(std::string s,char c){
      int con=0;
      int count=0;
      for (int i=0;i<s.size();i++){
        if (s[i]==c)con++;else con=0;
        count = max(con,count);
      }
      return count;
    }
    
    bool checkZeroOnes(string s) {
        int one = check(s,'1');
        int zero = check(s,'0');
        
        if (one<=zero)return 0;
        else return 1;
    }
};