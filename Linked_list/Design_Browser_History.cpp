 //Design Browser History
class BrowserHistory {
public:
    //doubly linked list
    
    list<string>history ;
    list<string>::iterator it;
    
     //url string form m hoatya h url save krna h  
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        it=history.begin();
    }
    
    void visit(string url) {
        auto del=it;
        del++;
        history.erase(del,history.end());
        history.push_back(url);
        it++;
    }
    
    string back(int steps) {
        while((it!=history.begin() and steps--))//back jana h
        {
            it--;
        }
        return *it;
        
    }
    
    string forward(int steps) {
         while((it!=(--history.end())and steps--))//forward jana h
        {
            it++;
        }
        return *it;
        
    }
};
