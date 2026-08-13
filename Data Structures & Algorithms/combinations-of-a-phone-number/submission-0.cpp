class Solution {
vector<string> ans;
private:
    void helper(string cur, string digits, int in){
        if(cur.size() == digits.size()){
            ans.push_back(cur);
            return;
        }
        char x = digits[in];
        switch(x){
            case '2':
                cur.push_back('a');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('b');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('c');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '3':
                cur.push_back('d');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('e');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('f');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '4':
                cur.push_back('g');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('h');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('i');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '5':
                cur.push_back('j');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('k');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('l');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '6':
                cur.push_back('m');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('n');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('o');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '7':
                cur.push_back('p');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('q');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('r');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('s');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '8':
                cur.push_back('t');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('u');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('v');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
            case '9':
                cur.push_back('w');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('x');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('y');
                helper(cur, digits, in+1);
                cur.pop_back();
                cur.push_back('z');
                helper(cur, digits, in+1);
                cur.pop_back();
                break;
        }
        return;
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits == "") return {};
        string cur;
        helper(cur, digits, 0);    
        return ans;
    }
};
