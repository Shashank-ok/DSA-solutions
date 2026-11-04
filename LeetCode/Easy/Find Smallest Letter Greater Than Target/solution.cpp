class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int lo = 0;
        int hi = n-1;
        int ans = letters[0];
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(letters[mid] > target){
            ans = letters[mid];
            hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return ans;
    }
};