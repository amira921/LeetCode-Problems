// using hash map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size()==1)return nums[0];
        
        unordered_map<int,int> major;
        for(auto x:nums)major[x]++;
        
        int res;
        for(auto x:major)
            if(x.second > (nums.size()/2))res = x.first;
        return res;
    }
};

// using sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};