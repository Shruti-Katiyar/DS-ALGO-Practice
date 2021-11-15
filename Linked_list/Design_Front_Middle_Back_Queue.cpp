//Design Front Middle Back Queue
class FrontMiddleBackQueue {
     vector<int>v;
public:
    
    //normal queue m push hota back say and pop hota front say but inthis queue aisi queue design      
	  // krni h jismay (add,delete) operation middle,fornt,back say perform ho
    
   
    FrontMiddleBackQueue() {
        
        
    }
    
    void pushFront(int val) {
        v.insert(v.begin(),val);
    }
    
    void pushMiddle(int val) {
        int mid=v.size()/2;
        v.insert(v.begin()+mid,val);
    }
    
    void pushBack(int val) {
        v.push_back(val);
    }
    
    int popFront() {
        if(v.size()==0)
            return -1;
        int x =v[0];
        v.erase(v.begin());
        return x;
    }
    
    int popMiddle() {
        if(v.size()==0)
            return -1;
        int mid=(v.size()-1)/2;
        int x=v[mid];
        v.erase(v.begin()+mid);
        return x;
        

    }
    
    int popBack() {
        if(v.size()==0)
            return -1;
        int x=v[v.size()-1];
        v.pop_back();
        return x;
    }
};
