class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int left = 0 , right = num;
       
        while(left <= right){
           long long int mid = left + (right-left)/2;
           if (mid*mid == num) return 1;
           else if (mid*mid > num) right = mid-1;
           else left = mid+1;
        }
        return 0;
    }
};
 