class MyQueue {
private:
    stack <int> st;
    stack <int> s;
public:
    MyQueue() {}
    
    void push(int x) {
       st.push(x);
    }        
    int pop() {
        while (!st.empty()){
            s.push(st.top());
            st.pop();
        }
        int n = s.top();
        s.pop();
        
        while (!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return n; 
    }
    
    int peek() {
        while (!st.empty()){
            s.push(st.top());
            st.pop();
        }
        int n = s.top();
        while (!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return n; 
    }
    
    bool empty() {
        return (st.empty());
    }
};