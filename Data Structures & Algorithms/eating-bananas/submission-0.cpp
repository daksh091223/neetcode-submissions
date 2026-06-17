class Solution {
public:
    bool can(vector<int>&piles,int h,int k){
        long long hours=0;
        for(int pile:piles){
            hours+=(pile+k-1)/k;
        }
        return (hours<=h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        if(n==h) return *max_element(piles.begin(),piles.end());

        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(can(piles,h,mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return ans;
    }
};
