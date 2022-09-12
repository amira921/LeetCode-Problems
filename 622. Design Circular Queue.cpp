class MyCircularQueue {
private:
    vector <int>data;
    int head;
    int tail;
    int capacity;
public:
    MyCircularQueue(int k) {
        head = tail = -1;
        capacity = k;
        data.resize(k);
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        else if (isEmpty()) head = tail = 0;
        else tail = (tail+1)%capacity;
        data[tail] = value;
        return true;
    }
    
    bool deQueue() {
       if (isEmpty()) return false;
       else if (head == tail) head = tail = -1;
       else head = (head+capacity-1)%capacity;
       return true;
    }
    
    int Front() {
       if (isEmpty()) return -1;
       return data[head];
    }
    
    int Rear() {
       if (isEmpty()) return -1;
       return data[tail];
    }
    
    bool isEmpty() {
        return (head == -1 && tail== -1);
    }
    
    bool isFull() {
        return (head == (tail+1)%capacity);
    }
};