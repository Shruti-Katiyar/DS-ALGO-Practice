#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int numRescueBoats(vector<int>& arr, int limit) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int left=0;
        int right=n-1;
        int boats=0; //intitally 0 h
        while(left<=right){
            if(arr[left]+arr[right]<=limit){
                left++;
                right--;
            }
            else{
                right--; //right walla diff boat m jayegha to baot ka cnt increment krdiya
                
            }
            boats++;
        }
        return boats;
        
        
    }
  int main(){
  	vector<int> arr{3,5,3,4};
  	int limit=5;
  	cout<<numRescueBoats(arr,limit);
  	
  	return 0;
  }  
