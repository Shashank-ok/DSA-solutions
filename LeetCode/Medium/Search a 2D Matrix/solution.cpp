class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(); int m = matrix[0].size();
        int lo = 0; int hi = n*m-1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            int i = mid/m, j = mid%m;
            if(matrix[i][j] == target)
            return true;
            else if(matrix[i][j] < target)
            lo = mid+1;
            else
            hi = mid-1;
        }
        return false;
    }
};