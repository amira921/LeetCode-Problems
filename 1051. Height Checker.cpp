// brute force
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp(heights);
        sort(heights.begin(),heights.end());
        
        int count=0;
        for (int i=0;i<heights.size();i++){
            if (heights[i] != temp[i])
                count++;
        }
        return count;
    }
};

// bubble sort
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected(heights);
        bool flag;        
        for(int i=0;i<expected.size()-1;i++){
            for(int j=0;j<expected.size()-i-1;j++){
                if (expected[j+1]<expected[j]){
                    swap(expected[j+1],expected[j]);
                    flag = false;
                }
            }
            if(flag) break;
        }
        
        int count=0;
        for(int i=0;i<heights.size();i++){
            if (heights[i] != expected[i])
                count++;
        }
        return count;
    }
};