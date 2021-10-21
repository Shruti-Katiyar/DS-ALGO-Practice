//Remove duplicate form sorted arr

#include<iostream>
#include<vector>
using namespace std;

//brute force
int duplicate(int a[],int n){
	 int temp[n];
        temp[0]=a[0];
        int res=1;
        for(int i=1;i<n;i++){
            if(temp[res-1]!=a[i]){
                temp[res]=a[i];
                res++;
            }
        }
        for(int i=1;i<res;i++){
            a[i]=temp[i];
            return res;
        }
    }

//optimised
int remove_duplicate(int arr[],int n){
	int res=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[res-1]){
			arr[res]=arr[i];
			res++;
		}
	}
	return res;
	
}

int main(){
	
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    n=remove_duplicate(arr,n);
     
    for (int i=0; i<n; i++)
        cout<<arr[i]<<",";
        
     
        
        
       
   return 0;
}

       



