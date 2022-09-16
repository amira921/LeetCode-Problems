class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if ((int)target < (int)letters[0] || (int)target >= (int)letters[letters.size()-1]) 
            return letters[0];
        else{
            int left = 0 , right = letters.size()-1;          
            while(left < right){
              int mid = left + (right - left)/2;
              if ((int)letters[mid] > (int)target) right = mid;
              else left = mid+1; 
           }
            return letters[left];
        }
        return 0;
    }
};
