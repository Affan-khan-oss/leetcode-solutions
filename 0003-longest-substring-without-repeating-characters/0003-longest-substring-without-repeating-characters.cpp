class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxLength = 0;

        unordered_set<char> seen;

        while (right < s.length()) {
            if (seen.find(s[right]) == seen.end()) {
                seen.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            } else {
                seen.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};