class MinStack {
private:
    // stack of integers
    stack<int> s;
    
    // initially have min equal the maximum integer number
    int min = INT_MAX;
    
public:
    MinStack() {
        // constructor does nothing
    }
    
    void push(int val) {
        // if the value to push is less than or equal to the minimum value
        if (val <= min)
        {
            // push the element min onto the stack s
            s.push(min);
            // have the minimum value be val
            min = val;
        }
        // push the element val onto the stack s
        s.push(val);
    }
    
    void pop() {
        // if the top element of the stack s is equal to the minimum value
        if (s.top() == min)
        {
            // remove the element on the top of the stack s
            s.pop();
            // have the minimum value be the top element of the stack s
            min = s.top();
        }
        // remove the element on the top of the stack s
        s.pop();
    }
    
    int top() {
        // return the top element of the stack s
        return s.top();
    }
    
    int getMin() {
        // return the minimum element in the stack
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */