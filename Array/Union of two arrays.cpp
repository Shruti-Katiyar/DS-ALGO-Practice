//Union of two arrays
https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;//set will contain unique no only 
        for(int i=0;i<n;i++){//store all the char of arr1
            s.insert(a[i]);
        }
            
            for(int i=0;i<m;i++){//store all char of arr2
                s.insert(b[i]);
                
            }
        return s.size();//return size of set
    }
};
