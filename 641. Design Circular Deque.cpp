class MyCircularDeque {
private:
    vector <int> data;
    int head;
    int tail;
    int capacity;
public:        
    MyCircularDeque(int k) {
        head = tail = -1;
        capacity = k;
        data.resize(k); 
    }
    
    bool insertFront(int value) {
        if (isFull()) return false;
        else if (isEmpty()) head = tail = 0;
        else head = (head+capacity-1)%capacity;
        data[head] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        else if (isEmpty()) head = tail = 0;
        else tail = (tail+1)%capacity;
        data[tail] = value;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        else if (head == tail) head = tail = -1;
        head = (head+1)%capacity;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        else if (head == tail) head = tail = -1;
        tail = (tail-1+capacity)%capacity;
        return true;
    }
    
    int getFront() {
       if (isEmpty()) return -1;
       return data[head];
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        return data[tail];
    }
   
    bool isEmpty() {
       return (head == -1 && tail == -1);
    }
    
    bool isFull() {
        return head == (tail+1)%capacity;
    }
};

