class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {      
       if (nums.size()==1)return nums[0];

       int con=0;int count=0;
       
       for (int i=0;i<nums.size();i++){
           if (nums[i]==1)con++; else con=0;
           count = max(con,count);
       }
       return count;
    }
};