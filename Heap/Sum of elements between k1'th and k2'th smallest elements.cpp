//Sum of elements between k1'th and k2'th smallest elements
https://practice.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/1/#


class Solution{
    public:
    long long findKthSmallest(long long A[], long long N, long long K){
        priority_queue<long long int> maxHeap;
        for(long long int i=0; i<N; i++){
            maxHeap.push(A[i]);
            if(maxHeap.size() > K){
                maxHeap.pop();
            }
        }
        
        return maxHeap.top();
    }
    // Your code goes here
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    { 
         long long int ans = 0;
        long long int lower = findKthSmallest(A, N, K1);
        long long int upper = findKthSmallest(A, N, K2);
        for(long long int i=0; i<N; i++){
            if(A[i] > lower and A[i] < upper){
                ans += A[i];
            }
        }
        
        return ans;
    }
};

