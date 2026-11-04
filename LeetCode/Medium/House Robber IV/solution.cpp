class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int n = nums.size();
        int lo = 1; int hi = *max_element(nums.begin(), nums.end());
        int ans = 0;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            int possibleThefts = 0;

            for(int i = 0; i < n; i++){
                if(nums[i] <= mid){
                    possibleThefts += 1;
                    i++; // Skip the next house to maintain the non-adjacent condition
                }
            }

            if(possibleThefts >= k){
            ans = mid;
            hi = mid-1;
            }
            else
            lo = mid+1;
        }
        return ans;
    }
};