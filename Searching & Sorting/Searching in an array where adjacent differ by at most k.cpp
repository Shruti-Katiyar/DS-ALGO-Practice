//Searching in an array where adjacent differ by at most k
https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1#

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    // Complete the function
    int ans=-1;
    int i=0;
    while(i<n){
        if(arr[i]==x){
            ans=i;
            break;
        }
        int y=max(1,abs(arr[i]-x)/k);
        i=i+y;
    }
    return ans;
}    	
