//check if array is sorted

#include<iostream>
#include<vector>
using namespace std;

//Native method
bool sorted(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				return false;
			}
		}
	}
	return true;
}

//optimised
bool issorted(vector<int> arr){
	int n=arr.size();
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1])
		return false;
	}
	return true;
}


int main(){
	vector<int> arr={1,12,9,24};
	int n=4;
	if(issorted(arr)){
		cout<<"yes";
	}
	else{
		cout<<"No";
	}
	
	
	return 0;
}
