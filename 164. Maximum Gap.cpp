class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size()<2)return 0; 
        
        sort(nums.begin(),nums.end());
        
        int maximum = abs(nums[1]-nums[0]);
        
        for(int i=1;i<nums.size()-1;i++)
            maximum = max(abs(nums[i+1]-nums[i]),maximum);
        
        return maximum;      
    }
};