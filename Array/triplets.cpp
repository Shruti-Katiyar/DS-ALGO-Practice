//using two pointer  approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> >triplets(vector<int> arr,int sum){
	int n=arr.size();
	
	sort(arr.begin(),arr.end());
	vector<vector<int> > result;
	
	//pick every a[i] & pairsum prob for remaining
	for(int i=0;i<=n-3;i++){//3rd last no tak jana h
	
	   int j=i+1;
	   int k=n-1;
	//two pointer approach
	while(j<k){
		int current_sum=arr[i];
		current_sum +=arr[j];
		current_sum +=arr[k];
		
		if(current_sum==sum){
			result.push_back({arr[i],arr[j],arr[k]});
			j++;
			k--;
		}
		else if(current_sum > sum){
			k--;
		}
		else{
			j++;
		}
		
	  }
   }
 return result;
	
}
	
     
	

int main(){
	vector<int> arr{1,2,3,4,5,6,7,9,15};
	int sum=18;
	
	auto result=triplets(arr,sum);
	for(auto x:result){
		for(auto number:x){
			cout<<number<<" ";
		}
		cout<<endl;
	}
	return 0;
}



