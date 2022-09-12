class MyStack {
private:
    queue <int> qe,qe2;
public:
    MyStack(){}
    
    void push(int x) {
        qe.push(x);
    }
    
    int pop() {
        while(!qe.empty() && qe.size()>1){
            qe2.push(qe.front());
            qe.pop();
        }
        int n = qe.front();
        qe.pop();
        
        while(!qe2.empty()){
            qe.push(qe2.front());
            qe2.pop();
        }
        return n;
    }
  
    int top() {
        return qe.back();
    }
    
    bool empty() {
        return qe.empty();    
    }
};