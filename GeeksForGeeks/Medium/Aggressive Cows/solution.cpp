class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int lo = 1;int hi = arr[n-1];
        int ans = 0;
        while(lo <= hi){
            int mid = (lo+hi)/2; // Desired minimum distance
            
            int cowsPlaced = 1; int prev_pos = arr[0];
            
            for(int i = 1; i < n; i++){
                if(arr[i] - prev_pos >= mid){
                prev_pos = arr[i];
                cowsPlaced++;
                }
            }
            
            if(cowsPlaced >= k){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return ans;
    }
};