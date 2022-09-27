class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0 , right=0 , sum=0 , min_sum=INT_MAX;
        
        while(left < nums.size()){
            sum += nums[left];
            
            while(sum >= target){
                min_sum = min(min_sum , left-right+1);
                sum -= nums[right];
                right++;
            }
            
            left++;
        }
        return (min_sum == INT_MAX)? 0:min_sum;
    }
};