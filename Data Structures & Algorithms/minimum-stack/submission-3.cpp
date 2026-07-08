class MinStack {
public:
    stack<int> Mystack;
    stack<int> Minstack;
    int mini;

    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        Mystack.push(val);
        mini = min(mini,val);
        Minstack.push(mini);
    }
    
    void pop() {
        Mystack.pop();
        Minstack.pop();
        if(Minstack.size() == 0){
            mini = INT_MAX;
           
        }
        else{
             mini = Minstack.top();
        }
    }
    
    int top() {
        int ele = Mystack.top();
        return ele;
    }
    
    int getMin() {
        return mini;
    }
};
