class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int res=nums[0];
        int left=0,right=n-1;
        while(left<=right){
            if(nums[right]>nums[left]){
                res=min(res,nums[left]);
                break;
            }
            int mid=left+((right-left)/2);
            res=min(res,nums[mid]);
            if(nums[mid]>=nums[left]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }

        return res;
    }
};
