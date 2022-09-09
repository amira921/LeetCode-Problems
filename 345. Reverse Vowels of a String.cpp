class Solution {
public:
    string reverseVowels(string s) {
        int low = 0 , high = s.size()-1;
        int right_index = -1, left_index = -1;
       
        while(low <= high){
            
            if (s[low]=='a'||s[low]=='e'||s[low]=='o'||s[low]=='u'||s[low]=='i'||
                s[low]=='A'||s[low]=='E'||s[low]=='O'||s[low]=='U'||s[low]=='I')
                right_index = low;
            else {
                right_index = -1;
                low++;
            }
            
            if (s[high]=='a'||s[high]=='e'||s[high]=='o'||s[high]=='u'||s[high]=='i'||
                s[high]=='A'||s[high]=='E'||s[high]=='O'||s[high]=='U'||s[high]=='I')
                left_index = high;
            else {
                left_index = -1;
                high--;
            }
            if (right_index!=-1 && left_index!=-1){
                swap(s[right_index],s[left_index]);
                low++;
                high--;
            }
        }
        return s;
    }
};