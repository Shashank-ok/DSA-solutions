class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0; int hi = n-1;
        if(target > nums[n-1])
        return n;
        while(lo < hi){
            int mid = (lo+hi)/2;
            if(nums[mid] == target)
            return mid;
            else if(nums[mid] > target)
                hi = mid;
            else
                lo = mid+1;              
        }
        return hi;
    }
};