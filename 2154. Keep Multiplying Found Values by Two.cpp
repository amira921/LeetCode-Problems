class Solution {
public:
    bool find(vector<int>& nums,int k){
       return count(nums.begin(),nums.end(),k);
    }
    int findFinalValue(vector<int>& nums, int original) {
        while (find(nums,original))
             original *= 2;
        return original;
    }
};