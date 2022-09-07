class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i;
        for ( i=0;i<nums.size();i++){       
          int pre_sum=0,post_sum=0;
            
          pre_sum=accumulate(nums.begin(), nums.begin()+i, 0);
          post_sum=accumulate(nums.begin()+i+1, nums.end(), 0);

          if (pre_sum==post_sum)return i;
        }
        return -1;
    }
};