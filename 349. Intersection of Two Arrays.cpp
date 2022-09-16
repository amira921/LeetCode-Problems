// solution using sets
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        for (auto x:nums1)
            s1.insert(x);
        
        set<int> s2;
        for (auto x:nums2)
            s2.insert(x);
        
        vector<int> intersection;
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(), std::back_inserter(intersection));
        
        return intersection;
    }
};
// brute force
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        
        if (nums1.size()<nums2.size()){
            for(int i = nums1.size();i<nums2.size();i++) 
                nums1.push_back(-1);
            sort(nums1.begin(),nums1.end());
        }else{
            for(int i = nums2.size();i<nums1.size();i++) 
                nums2.push_back(-1);
            sort(nums2.begin(),nums2.end());
        }
        
        vector<int>intersection;
        for (int i=0;i<nums1.size();i++){
            for (int j=0;j<nums1.size();j++){
               if (nums1[i] == nums2[j]){
                  intersection.push_back(nums1[i]);
                  break;
               }
            }
        }
        return intersection;
    }
};

// solution binary search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 , right = nums.size()-1;
        while(left <= right){
          int mid = left +(right - left)/2;
          if (nums[mid]==target) return mid;
          else if (nums[mid]>target) right = mid - 1;
          else left = mid + 1; 
       }
       return -1;     
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
    
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++){
            int temp = search(nums2,nums1[i]);
            if(temp!=-1) ans.push_back(nums2[temp]);
        }
        
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        
        return ans;
    }
};