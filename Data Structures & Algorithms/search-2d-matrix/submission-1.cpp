class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0;
        while(row<n && row>=0){
            int lower=matrix[row][0];
            int upper=matrix[row][m-1];
            if(upper<target){
                row++;
            }
            else if(lower>target){
                return false;
            }
            else{
                int left=0,right=m-1;
                while(left<=right){
                    int mid=left+((right-left)/2);
                    if(matrix[row][mid]==target) return true;
                    else if(matrix[row][mid]>target){
                        right=mid-1;
                    }
                    else{
                        left=mid+1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
