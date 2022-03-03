//Smallest Absolute Difference 
https://practice.geeksforgeeks.org/problems/smallest-absolute-difference4320/1#

int kthDiff(int a[], int n, int K)
{
    vector<int> ans;
    int x,y;
    for(int i=0;i<n-1;i++){//n-1 bw  when i=4 then subtract kisay kreghy 4 k bad koi element nh h wo subtract nh kr payegha
        for(int j=i+1;j<n;j++){
           x=abs(a[i]-a[j]);  
            ans.push_back(x);
        }
    }
   sort(ans.begin(),ans.end()); //1 1 1 2 2 3
    return ans[K-1];//bw array ka index 0 say start h
}
//TC: o(n^2) +o(nlogn)
//This will give TLE

//Apply binary search
 //sort the array 1 2 3 4 then 
 //find minm difference a[i]-a[j] 2-1 is almost 1
 // max difference is a[1]-a[n] 4-1 = 3
 //mim will be low value and maxm will be hight value now apply binary search bw we have to find kth minim no
 
 int cnt(int a[],int n,int mid){
     int x=0;
     for(int i=0;i<n;i++){
         x+=upper_bound(a+i,a+n,a[i]+mid)-(a+i+1);
     }
     return x;
 }
int kthDiff(int a[], int n, int k)
{
   sort(a,a+n);
   int low=a[1]-a[0];
   for(int i=1;i<n-1;i++){
       low=min(low,a[i+1]-a[i]);//old low minimum h ya phir current jo i+1 kr k nikla rha h wo  min h
      // abs isly nh niklna h kuki sort kr liya h 
       
   }
   int high=a[n-1]-a[0];
    
    while(low<high){
       // int mid=(low+high)>>1; or
        int mid=(low + high)/2;
        if(cnt(a,n,mid) < k){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}


