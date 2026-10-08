class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int l = 0;
        int r = rows*cols - 1;
        while(l<r)
        {
            int mid = (l+r)/2;
            int temp = matrix[mid / cols][mid % cols];
            if(temp == target)
            {
                return true;
            }
            if(temp > target)
            {
                r = mid;
            }
            else
            {
                l = mid+1;
            }
        }
        return matrix[l / cols][l % cols] == target;
    }
};
