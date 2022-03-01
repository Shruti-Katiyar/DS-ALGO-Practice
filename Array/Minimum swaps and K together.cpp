//Minimum swaps and K together
https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#

class Solution{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int cnt=0;
        for(int i=0;i<n;i++){//first find total numbers less than or equal to k
            if(arr[i]<=k)
            cnt++;
        }
            //cnt bad no.s which are greater then k
            int badno=0;
            for(int i=0;i<cnt;i++)
            if(arr[i]>k)badno++;
            
            
            int ans=badno;
            for(int i=0, j=cnt; j<n; i++, j++){//then using sliding window technique 
            
                if(arr[i]>k)badno--;//if i points to bad no and then we are excluding that no(when we shift our window right)
                
                if(arr[j]>k)badno++;//if j points to bad no and also we are including that no(when we shift our window right)
                
                ans=min(ans,badno);
             }
            
           
           return ans;
        }
        
        
    
};



