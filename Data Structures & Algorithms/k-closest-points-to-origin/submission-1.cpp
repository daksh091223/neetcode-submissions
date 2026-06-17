class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<pair<int,int>> dist(n);
        for(int i=0;i<n;i++){
            dist[i].first=points[i][0]*points[i][0] + points[i][1]*points[i][1];
            dist[i].second=i;
        }
        sort(dist.begin(),dist.end());
        vector<vector<int>> res;
        for(int i=0;i<k;i++){
            int index=dist[i].second;
            res.push_back(points[index]);
        }

        return res;
    }
};
