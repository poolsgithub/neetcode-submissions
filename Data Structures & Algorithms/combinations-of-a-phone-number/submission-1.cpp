class Solution {
public:
    vector<string> m = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    void bt(string sub, int i, string& digits) {
       if (i == digits.size()){
            ans.push_back(sub);
            return;
       }

       int dig = digits[i] - '0';

       for (int a = 0; a < m[dig].size(); ++a){
            sub += m[dig][a];
            bt(sub, i + 1, digits);
            sub.pop_back();
       }
       
    }
    vector<string> letterCombinations(string digits) {
        if (digits == "") return {};
        bt("", 0, digits);
        return ans;
    }
};
