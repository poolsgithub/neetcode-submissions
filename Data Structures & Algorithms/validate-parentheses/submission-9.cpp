class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for(auto ch : s){
            if(ch == '{' || ch == '(' || ch == '['){
                open.push(ch);
            }
            if(ch == '}' || ch == ')' || ch == ']'){
                if(open.empty()) return false;
                if( ch == '}' && open.top() == '{' ||
                    ch == ')' && open.top() == '(' ||
                    ch == ']' && open.top() == '[' ){
                        open.pop(); 
                }
                else break;
            }
        }
        if(open.empty()) return true;
        
        return false;
    }
};
