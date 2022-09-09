class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int i = 1;
        
        if (len>=1 && digits[len-1]<9)
              digits[len-1]++;
        
        else if (len>=1 && digits[len-1]==9){
            digits[len-1]=0;
              
            while(len-1-i >= 0 && digits[len-1-i]==9){
              digits[len-1-i]=0;
              i++;
            }
            
            if (len-1-i >= 0) 
                digits[len-i-1]++;
            else if (len-1-i < 0) 
                digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
