class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int sub_max = max/2;

        int index_max;
        for (int i=0;i<nums.size();i++)
           if (nums[i]==max) index_max =i;
        
        
        for (auto x:nums){
            if (x!=max && x > sub_max) return -1;
        }
        return index_max;            
    }
};