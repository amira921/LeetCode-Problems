// using Sorting
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for (int i=1;i<nums.size();i++)
            if(nums[i]==nums[i-1])return 1;    
        
        return 0;
    }
};

// using Hash Map 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto x:nums){
            hash[x]++;
            if(hash[x]>1)return 1;
        }
        return 0;
    }
};