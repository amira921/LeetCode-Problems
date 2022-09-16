class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto x:nums2)
            nums1.push_back(x);
        
        sort(nums1.begin(),nums1.end());   
        
        double ans = nums1.size()/2;
        if (nums1.size()%2==0) 
          return (double)(nums1[ans] + nums1[ans-1] )/2;
          
        else return (double) nums1[ans];
    }
};

