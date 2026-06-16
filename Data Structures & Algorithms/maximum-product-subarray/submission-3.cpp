class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxend=nums[0];
        int minend=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            int curr=nums[i];
            if(curr<0) swap(maxend,minend);
            maxend=max(curr,curr*maxend);
            minend=min(curr,curr*minend);
            res=max(maxend,res);
        }

        return res;
    }
};
