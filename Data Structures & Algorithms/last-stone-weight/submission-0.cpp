class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int first_max=0,second_max=0;
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            first_max=stones[stones.size()-1];
            second_max=stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(first_max>second_max) stones.push_back(first_max-second_max);
        }

        if(stones.size()==1) return stones[0];
        return 0;
    }
};
