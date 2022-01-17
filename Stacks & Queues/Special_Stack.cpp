//Special Stack
https://practice.geeksforgeeks.org/problems/special-stack/1#

stack<int>ss;
void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a); 
	if(ss.size()==0 or ss.top()>=a){
	    ss.push(a);
	}

}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size()==0;
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.size()==0)return -1;
	int ans=s.top();
	s.pop();
	if(ss.top()==ans){
	    ss.pop();
	}
	return ans;
}

int getMin(stack<int>& s){
	// Your code goes here
	if(ss.size()==0){
	return -1;
}
else{
    
	return ss.top();
}
}
