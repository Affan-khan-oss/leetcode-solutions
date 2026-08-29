class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < prefix.length() &&
        j < strs[i].length() &&
        prefix[j] == strs[i][j]) {
        j++;
            }
            prefix = prefix.substr(0, j);
            if (prefix == "")
                return "";
        }
        return prefix;
    }
};