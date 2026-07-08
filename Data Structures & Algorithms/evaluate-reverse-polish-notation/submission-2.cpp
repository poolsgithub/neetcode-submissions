class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res = 0;
        stack<int> ST;
        int op1,op2;
        int temp;
        for(auto it: tokens){
            
            if(it == "+" || it == "-" || it == "*" || it == "/"){
                op1 = ST.top();
                ST.pop();
                op2 = ST.top();
                ST.pop();
                
                if(it == "+"){
                    temp = op1 + op2;
                }
                if(it == "-"){
                    temp = op2 - op1;
                }
                if(it == "*"){
                    temp = op1 * op2;
                }
                if(it == "/"){
                    temp = op2 / op1;
                }
            }
            else{
                temp = stoi(it);
            }
            ST.push(temp);
        }
        res = ST.top();

        return res;
    }
};
