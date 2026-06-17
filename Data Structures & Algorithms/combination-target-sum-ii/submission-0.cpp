class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int>&candidates, int target, vector<int>&curr, int i){
        if(target==0){
            res.push_back(curr);
            return;
        }
        if(target<0 || i>=candidates.size()) return;
        for(int idx=i;idx<candidates.size();idx++){
            if(idx>i && candidates[idx]==candidates[idx-1]) continue;
            if(candidates[idx]>target) break;
            curr.push_back(candidates[idx]);
            backtrack(candidates,target-candidates[idx],curr,idx+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,curr,0);
        return res;
    }
};
