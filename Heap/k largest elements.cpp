//k largest elements or( return K largest element in array)
https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1#

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> ans;
	    priority_queue<int,vector<int>,greater<int>> minh;
	    for(int i=0;i<n;i++){
	        minh.push(arr[i]);
	  	if(minh.size()>k){
	        minh.pop();
	    }
	}
	while(minh.size()>0){
	    ans.push_back(minh.top());
	    minh.pop();
	}
	 reverse(ans.begin(),ans.end()); 
	 return ans;
	}

	

};
