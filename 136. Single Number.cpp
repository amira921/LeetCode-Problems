class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int resultXOR = 0;                
        for(int a: nums)
            resultXOR ^= a;        
        return resultXOR;   
    }
};