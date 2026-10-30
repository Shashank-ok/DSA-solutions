typedef long long ll;
class Solution {
public:
    bool fun(int k, vector<int> &piles, int h){
        ll temp = 0;
        for(int i = 0; i < piles.size(); i++){
            temp = temp + (piles[i]/k) + (piles[i] % k != 0);
        }
        if(temp <= h)
        return true;
        else
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int hi = INT_MIN;
        for(int i = 0; i < n; i++)
        hi = max(hi, piles[i]);
        int lo = 1;
        int ans = 0;
        while(lo <= hi){
            int mid = lo + ((hi-lo)/2);
            if(fun(mid, piles, h)){
                ans = mid;
                hi = mid-1;
            }
            else
            lo = mid+1;
        }
        return ans;
    }
};