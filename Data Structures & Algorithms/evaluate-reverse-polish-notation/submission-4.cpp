class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        //push isdigit nuums into stack and 
        //perform operations after you found op
        for(auto s : tokens){
            if(isdigit(s.back())){
                num.push(stoi(s));
            }
            else{
                if(num.empty()) return -1;
                int a = num.top();
                num.pop();
                int b = num.top();
                num.pop();
                if(s == "+"){
                    num.push(a+b);
                }
                if(s == "-"){
                    num.push(b-a);
                }
                if(s == "*"){
                    num.push(b*a);
                }
                if(s == "/"){
                    num.push(b/a);
                }
            }
        }
        return num.top();
    }
};
