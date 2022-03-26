//Smallest greater elements in whole array
https://practice.geeksforgeeks.org/problems/smallest-greater-elements-in-whole-array2751/1#

int* greaterElement(int arr[], int n)
{
    // Complete the function
    set<int> s;//set isly liya bw set m already ascending order m no hoaty h
    //then lower bound and upper bound lagha k binary search lagha sakty h
    
    for(int i=0;i<n;i++){
        s.insert(arr[i]);//put all elements in set
    }
    for(int i=0;i<n;i++){
        auto idx=s.upper_bound(arr[i]);//upper bound wil return nxt no just greater then arr[i]
        if(idx!=s.end())
        arr[i]=*idx;//jo idx mila h uskay value ko dal do arr[i] m else -10000 dal do
           
        else
           arr[i]=-10000000;
    }
    return arr;
}
 
