class MinStack {
public:
    
    int mini;
    stack<int> sk;
    stack<int> mn;
    
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        mini = min(mini,val);
        sk.push(val);
        mn.push(mini);
    }
    
    void pop() {
        sk.pop();
        mn.pop();
        if(!mn.empty()) mini = mn.top();
        else mini = INT_MAX;
    }
    
    int top() {
        return sk.top();
    }
    
    int getMin() {
        return mn.top();
    }
};
