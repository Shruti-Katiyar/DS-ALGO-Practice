#include<iostream>
#include<vector>
using namespace std;

int trapped_water(vector<int> height){
	int n=height.size();
	//corner case
	if(n<=2){
		return 0;
	}
	
	//left max ,right max
	vector<int> left(n,0),right(n,0);
	left[0]=height[0];
	right[n-1]=height[n-1];
	
	//left arr
	    for(int i=1;i<n;i++){
		    left[i]=max(left[i-1],height[i]);
		
	//right arr
		
		//right[n-i-1]=max(right[n-i],height[n-i-1]);
		for(int i=n-2;i>=0;i--)
			right[i]=max(right[i+1],height[i]);
		}
	

	
	// total water
	int water=0;
	for(int i=0;i<n;i++){
 		water+=min(left[i],right[i])-height[i];
	}
	
   return water;	
}
int main(){
	vector<int> water{0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<trapped_water(water)<<endl;
}


