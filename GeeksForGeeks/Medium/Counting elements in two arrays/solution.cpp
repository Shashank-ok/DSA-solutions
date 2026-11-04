class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        int n = a.size();
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            a[i] = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
        }
        return a;
    }
};