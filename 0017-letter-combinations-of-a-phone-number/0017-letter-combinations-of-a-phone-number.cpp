class Solution {
public:
    void backtrack(string& digits, int index,
        string& current,
        vector<string>& ans,
        vector<string>& mapping) {
        if (index == digits.length()) {
        ans.push_back(current);
        return;
        }
        string letters = mapping[digits[index] - '0'];
        for (char ch : letters) {
            current.push_back(ch);
            backtrack(digits, index + 1, current, ans, mapping);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty())
            return ans;
        vector<string> mapping = {
    "",  
    "",     
    "abc",  
    "def",  
    "ghi",  
    "jkl",  
    "mno",  
    "pqrs",
    "tuv",
    "wxyz"
        };
        string current = "";
        backtrack(digits, 0, current, ans, mapping);
        return ans;
    }
};