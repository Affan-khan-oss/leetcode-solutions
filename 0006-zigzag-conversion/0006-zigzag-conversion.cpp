class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;
        vector<string> rows(numRows);
        int row = 0;
        int direction = 1;
        for (char ch : s) {
            rows[row] += ch;
            if (row == 0)
                direction = 1;
            if (row == numRows - 1)
                direction = -1;
            row += direction;
        }
        string ans = "";
        for (string r : rows) {
            ans += r;
        }
        return ans;
    }
};