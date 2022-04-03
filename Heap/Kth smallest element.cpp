//Kth smallest element
https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#

//using sorting
class Solution{
    public:
 
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        //3 2 7 10 15 20
        sort(arr,arr+r+1);
       return arr[k-1];
        
    }
};
//tc: o(nlogn)

//using heap

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        //3 2 7 10 15 20
        priority_queue<int>maxh;
        for(int i=0;i<=r;i++){
            maxh.push(arr[i]);
        
        if(maxh.size()>k){
            maxh.pop();
        }
        
    }
    return maxh.top();
    }
};
//TC: O(nlogk)


