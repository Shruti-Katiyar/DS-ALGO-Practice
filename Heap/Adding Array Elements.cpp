//Adding Array Element

https://practice.geeksforgeeks.org/problems/adding-array-element4756/1/?page=2&category[]=Heap&sortBy=submissions#

class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
       // make minheap smallest no top per mill zayegha
        priority_queue<int,vector<int>,greater<int>>minh;
        for(int i=0;i<n;i++){
            minh.push(arr[i]);
       
        } 
        int cnt=0;
        
        if(minh.top()>=k){//agr heap ka top greater or equal h k then stop
          return 0;
        }
        else{
            while(minh.top()<k){
    //jab tak top chota h k say sum calculate kro or push kro heap m and cnt++
                int x=minh.top();
                minh.pop();
                int y=minh.top();
                 minh.pop();
                int sum=x+y;
                  
            // push the sum in heap
                 minh.push(sum);
                  cnt++;
            }
        }
            
            
        return cnt;
         
    }
};
