class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto it : s){
            if(it == '{' || it == '(' || it == '['){
                stk.push(it);
            }
            else if(it == '}' || it == ')' || it == ']'){
                if(stk.empty()) return false;
                char top = stk.top();
                if(abs(int(it - top)) < 3){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
