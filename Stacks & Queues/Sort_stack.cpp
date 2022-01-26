//Sort a stack
https://practice.geeksforgeeks.org/problems/sort-a-stack/1#

void insert(int x,stack<int> &s){
    if(s.size()==0 or s.top()<x){
        s.push(x);
        
    }
    else{
        int a=s.top();
        s.pop();
        insert(x,s);
        s.push(a);
    }
}
void reverse(stack<int> &s){
    if(s.size()>0){
        int x=s.top();
        s.pop();
        reverse(s);
        insert(x,s);
    }
}
void SortedStack :: sort()
{
   //Your code here
   reverse(s);
}
