//Transfiguration 
https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1#

class Solution{
    
    public:
    int transfigure (string A, string B)
    {
//kya possible to convert  krna string a to b ?
//eg : A= aabd  B= dsai
// is case m possible nh h convert krna bw both string have diff char
//char have to ccur same no of time
    	int sum=0;
    	for(int i=0;i<A.length();i++){
    	    sum+=A[i];//add ASCII value of char a
    	    sum-=B[i];//subtract the ASCII value of char b
    	}
    	
    	//if they occur same no of time ( if i add a and subtract a the sum will be 0)  
    	if(sum!=0)
		return -1;
    	
    	int i=A.length();
    	int j=B.length();
    	
    	int cnt=0;
    	while(i>=0 and j>=0){
    	    if(A[i]!=B[j]){//if they are not equal the increment i pointer and compare to j again and increment cnt
    	        cnt++;
    	        i--;
    	    }
    	    else{//is they are equal
    	        i--;
    	        j--;
    	    }
    	}
    	return cnt;
    }
};

//TC: O(N)  SC: O(1)


