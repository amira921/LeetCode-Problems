class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sum;
        
        for (int i=0;i<nums.size();i++){
            for (int j=0;j<nums.size();j++){
                if (i!=j && nums[i]+nums[j]==target){
                    sum.push_back(i);
                    sum.push_back(j);
                    return sum; 
                }
            }
        }
        return sum;
    }
};