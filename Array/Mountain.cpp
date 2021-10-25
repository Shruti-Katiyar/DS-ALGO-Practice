#include<iostream>
#include<vector>
using namespace std;
int highest_mountain(vector<int> a){
	int n=a.size();
	int largest=0;
	
	for(int i=1;i<=n-2;){
		//check a[i] is peak or not
		if(a[i]>a[i-1] and a[i]>a[i+1]){ //this is peak
		   int cnt=1;
		   int j=i;
		   
		   //cnt backward
		   while(j>=1 and a[j]>a[j-1]){ //if  become j=0 then a[j-1] give seg.fault
		   	    j--;
		   	    cnt++;
		   }
			   
		   	//cnt forward
		   	while(i<=n-2 and a[i]>a[i+1]){ //if become i=n-1 then a[i+1] give seg.fault 
		   	
		   		i++;
		   		cnt++;
			   }
			largest=max(largest,cnt);
		}
		else{
			i++;
		}
		
	}
	return largest;
}
int main(){
	vector<int> a{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	cout<<highest_mountain(a);
	
	return 0;
}
