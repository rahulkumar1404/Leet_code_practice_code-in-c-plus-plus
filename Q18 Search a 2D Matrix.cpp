https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0;
        int e = (row*col) - 1;
        int mid = s + (e-s)/2;
        while(s<=e){
            int ele = matrix[mid/col][mid%col];
            if(ele == target) return 1;
            else if(ele<target) {
                s = mid + 1;
            }
            else e = mid -1;
            mid = s + (e-s)/2;
        }
        return 0;
    }
};
