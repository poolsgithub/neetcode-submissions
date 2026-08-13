class Solution {
vector<string> ans;
private:
    void helper(string cur, int n, int open, int close){
        if(cur.size() == 2*n){
            ans.push_back(cur);
            return;
        }
        if(open < n){
            cur.push_back('(');
            helper(cur, n, open+1, close);
            cur.pop_back();
        }
        if(close < open){
            cur.push_back(')');
            helper(cur, n, open, close+1);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string cur = "";
        helper(cur, n, 0, 0);
        return ans;
    }
};
