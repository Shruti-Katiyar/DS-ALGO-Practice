//Design Circular Deque
class MyCircularDeque {
public:
    deque<int> deq;
    int s = 0;
    MyCircularDeque(int k) {
        s=k;
    }
    
    //Adds an item at the front of Deque.Return true if the operation is successful.
    bool insertFront(int value) {
        deq.push_front(value);
        if(deq.size()<=s)return true;
        else
            deq.pop_front();
        return false;
    }
    
    //Adds an item at the rear of Deque
    bool insertLast(int value) {
        deq.push_back(value);
        if(deq.size()<=s)return true;
        else
            deq.pop_back();
        return false;
    }
    
    //delete an item from the front of Deque.
    bool deleteFront() {
        if(deq.size()>0)
        {
            deq.pop_front();
            return true;
        }
        return false;
    }
    
    // Deletes an item from the rear of Deque.
    bool deleteLast() {
        if(deq.size()>0)
        {
            deq.pop_back();
            return true;
        }
        return false;
    }
    
    //Get the front item from the deque
    int getFront() {
        if(deq.size()==0)
            return -1;
        return deq.front();
    }
    
    //Get the last item from the deque.
    int getRear() {
        if(deq.size()==0)
            return -1;
        return deq.back();
    }
    
    //Checks whether the circular deque is empty or not.
    bool isEmpty() {
        if(deq.size()==0)
            return true;
        return false;
    }
    
    //Checks whether the circular deque is full or not
    bool isFull() {
        if(deq.size()==s)
            return true;
        return false;
    }
  
};
