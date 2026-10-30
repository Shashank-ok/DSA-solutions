class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0; int hi = n-1;
        int ans = INT_MAX;
        if(n == 1)
        return nums[0];
        if(n == 2)
        return min(nums[0], nums[1]);
        while(lo <= hi){
            int mid = (lo+hi)/2;
            ans = min(ans,nums[mid]);
            if(lo != hi && nums[mid] == nums[hi] && nums[mid] == nums[lo]){
                lo++; hi--;
            }
            else{
                if(nums[mid] > nums[hi]){ // left part
                    lo = mid+1;
                }
                else{
                    ans = min(ans, nums[mid]);
                    hi = mid-1;
                }
            }
        }
        return ans;
    }
};