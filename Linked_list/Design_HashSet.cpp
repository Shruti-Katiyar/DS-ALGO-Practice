//Design HashSet
class MyHashSet {
public:
    //in c++ it is Unordered sets and in java it is hashset
    vector<int> v;
    int size;
    
    MyHashSet() {
        size=1e7; //10^6 range given h to tm 10^7 tak vector create kr skatay h usay badha nh kr 
	            	//skatay h agar range zayada ho to we use chaining method
        v.resize(size);
    }
    
    void add(int key) {
        v[key]=1;
    }
    
    void remove(int key) {
        v[key]=0;
    }
    
    bool contains(int key) {
       return  v[key];
    }
};

//second method

class MyHashSet {
public:
   
    vector<list<int>> v;
    int size;
    
    MyHashSet() {
        size=100; 
        v.resize(size);
    }
    
    int hash(int key){
        return key%size;
    }
    list<int>:: iterator search(int key)
    {
      int i=hash(key);
        return find(v[i].begin(),v[i].end(),key);
    }
    
    void add(int key) {
        if(contains(key))return;
        int i=hash(key);
        v[i].push_back(key);
    
    }
    
    void remove(int key) {
        if(!contains(key))return;
        int i=hash(key);
        v[i].erase(search(key)); //erase()is present in doubly linked list
        
    }
    
    bool contains(int key) {
       int i=hash(key);
        if(search(key)!=v[i].end())return true;
        else return false;
    }
};
