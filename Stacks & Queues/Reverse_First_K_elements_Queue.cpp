//Reverse First K elements of Queue
https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#

queue<int> modifyQueue(queue<int> q, int k) {
  
//push first k elements into stack then put them in ans queue so that they will 
//be in reverse order ,now add remaning elements of given q to ans queue
    
   
    stack<int>s;
    for (int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    queue<int>ans;
    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
        
    }
    return ans;
}

