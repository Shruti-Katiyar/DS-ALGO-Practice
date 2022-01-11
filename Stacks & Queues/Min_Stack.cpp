//Min Stack
//1. Using two stack : Pushing min element in second stack (ss)

class MinStack {
public:
    stack<int> s;
    stack<int> ss;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.size()==0 or val<=ss.top())
            ss.push(val);
        return;
       
        
    }
    
    void pop() {
        if(s.size()==0)
            return;
        int ans =s.top();
        s.pop();
        if(ss.top()==ans)
            ss.pop();
    }
    
    int top() {
        if(s.size()==0)
            return -1;
        return s.top();
    }
    
    int getMin() {
        if(s.size()==0)
            return -1;
        return ss.top();
        
    }
};

//2. Using a variable min_element



