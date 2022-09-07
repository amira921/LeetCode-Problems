class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        int step = 0;

        while(step+1 < size && arr[step] < arr[step+1])
            step++;

        if (step==0 || step==size-1) return false;

        while(step+1 < size && arr[step] > arr[step+1])
            step++;

        return step == size-1;
    }
};

