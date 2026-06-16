class Solution {
public:
    bool helper(int i, string &s, vector<string>& wordDict, vector<int>& memo) {
        int n = s.size();

        if (i == n) return true;

        if (memo[i] != -1) return memo[i];

        for (string &word : wordDict) {
            int len = word.size();

            if (i + len <= n && s.substr(i, len) == word) {
                if (helper(i + len, s, wordDict, memo))
                    return memo[i] = true;
            }
        }

        return memo[i] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> memo(s.size(), -1);
        return helper(0, s, wordDict, memo);
    }
};