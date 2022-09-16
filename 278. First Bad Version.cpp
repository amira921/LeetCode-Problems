class Solution {
public:
    int firstBadVersion(int n) {
        long long int left = 1 , right = n;
        
        while(left < right){
           long long int mid = left +(right - left)/2;
           if (!isBadVersion(mid)) left = mid+1; 
           else right = mid; 
        }
        while (!isBadVersion(left)){
            left++;
        }
        return left;
    }
};