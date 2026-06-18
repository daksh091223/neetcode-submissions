class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int res=0;
        for(int i=0;i<n;i++){
            unordered_set<char> charSet;
            for(int j=i;j<n;j++){
                if(charSet.find(s[j])!=charSet.end()){
                    break;
                }
                charSet.insert(s[j]);
            }
            res=max(res,(int)charSet.size());
        }
        return res;
    }
};
