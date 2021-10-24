//pairs
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairsum(vector<int> a,int sum){
	unordered_set<int> s;
	vector<int> ans;
	
	for(int i=0;i<a.size();i++){
		int x=sum-a[i]; //finding x 
		
		//check x is present inside set or not
		//if present then  push  current no or x  into ans vector
		
		if(s.find(x)!=s.end()){ //this means that no is present inside set
			ans.push_back(x);
			ans.push_back(a[i]);
			return ans;
		}
		// afte this insert current no inside set
		s.insert(a[i]); 
	}
	return {}; //if it is not there return empty vector
}

int main(){
	vector<int> a{10,5,2,3,-6,9,11};
	int sum=4;
	
	auto p=pairsum(a,sum);
	if(p.size()==0){
		cout<<"no pair";
	}
	else{
		cout<<p[0]<<" "<<p[1]<<endl;
	}
	
	return 0;
}

