class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_value = nums[0];
        int max_difference = -1;
        
        for(int i=1;i<nums.size();i++){
            min_value = min(min_value,nums[i]);
            max_difference = max(max_difference,nums[i]-min_value);
        }
        if (max_difference == 0) return -1;
        return max_difference;
    }
};