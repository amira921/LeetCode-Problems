class FrontMiddleBackQueue {
private:
    vector<int>data;
public:
    FrontMiddleBackQueue(){}
    
    void pushFront(int val) {
        if (data.empty()) data.push_back(val);
        else data.insert(data.begin(),val);  
    }
    
    void pushMiddle(int val) { 
          int  mid = data.size()/2;       
          data.insert(data.begin()+mid,val);
    }
      
    void pushBack(int val) {
        data.push_back(val);  
    }
    
    int popFront() {
        if (!data.empty()){
          int temp = data[0];
          data.erase(data.begin());
          return temp;
        }
        return -1;
    }
    
    int popMiddle() {
        if (data.size()==1){
            int temp = data[0];
            data.pop_back();
            return temp;
        }
        else if (!data.empty()){
            int mid;
            if (data.size()%2==0) mid = (data.size()/2)-1;
            else mid = data.size()/2;
            
            int temp = data[mid];
            data.erase(data.begin()+mid);
            return temp;
        }
        return -1;
    }
    
    int popBack() {
        if (!data.empty()){
           int temp = data[data.size()-1];
           data.pop_back();
           return temp;
        }
        return -1;
    }
};