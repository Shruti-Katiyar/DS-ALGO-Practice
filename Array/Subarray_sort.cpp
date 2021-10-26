#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//brute force ( o(NlogN) time and o(logN) space )

vector<int> subarray(vector<int> a){
	
    vector<int> b(a); //copy of arr
    sort(a.begin(),a.end());
    
    int i=0;
    int n=a.size();
    while(i<n and a[i]==b[i]){
    	i++;
	}
	
	int j=a.size()-1;
	while(j>=0 and a[j]==b[j]){
		j--;
	}
	//already sorted
	if(i==a.size()){
		return {-1,-1};
	}
	return {i,j};
}

////////////////////////////////optimised/////////////////////////////////////
bool outOfOrder(vector<int> a,int i){
	int x=a[i];
	if(i==0){
		return x>a[1];
	}
	if(i==a.size()-1){
		return x<a[i-1];
	}
	return x>a[i+1] or x<a[i-1];
}

pair<int,int> subarray_sort(vector<int> a){
	int smallest=INT_MAX;
	int largest=INT_MIN;
	
	for(int i=0;i<a.size();i++){
		int x=a[i];
		
		if(outOfOrder(a,i)){
			smallest=min(smallest,x);
			largest=max(largest,x);
		}
	}
	
	//next step find the right idx where smallest & largest lie
	if(smallest==INT_MAX){
		return {-1,-1};
	}
	
	int left=0;
	while(smallest>=a[left]){
		left++;
		
	}
	int right=a.size()-1;
	while(largest<=a[right]){
		right--;
	}
	return {left,right};
}

int main(){
	vector<int>a{1,2,3,4,5,8,6,7,9,10,11};
    auto p=subarray_sort(a);
    cout<<p.first<<" and "<<p.second;
	return 0;
}









