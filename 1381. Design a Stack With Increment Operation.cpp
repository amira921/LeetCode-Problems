class CustomStack {
private:
    vector<int>st;
public: 
    int Size;
    
    CustomStack(int maxSize) {
        Size = maxSize;
    }
    
    void push(int x) {
        if (st.size()<Size)
            st.push_back(x);        
    }
      
    int pop() {
        if(st.size()>0){
            int n = st.back();
            st.pop_back();
            return n;
        }
        return -1;
    }
    void increment(int k, int val) {
        if (st.size() <= k){
            for(int i=0;i<st.size();i++)
                st[i]+=val;
        }
        else if (st.size()>k){
            for (int i=0;i<k;i++)
                st[i] += val;
        }
    }    
};