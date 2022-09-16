class Solution {
public:
    int guessNumber(int n) {
        long long int left = 0 , right = n;
        while(left <= right){
            long long int mid = left + (right - left)/2; 
            int n = guess(mid);
            if (n == -1) right = mid-1;
            else if (n == 1) left = mid+1;
            else if (n == 0) return mid;
        }
        return -1;
    }
};
