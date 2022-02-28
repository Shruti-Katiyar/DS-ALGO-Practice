//Average Salary Excluding the Minimum and Maximum Salary
https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/

//Brute force
class Solution {
public:
    //Brute force
    double average(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       double cnt=0;
        double sum=0;
        for(int i=1;i<nums.size()-1;i++){//sort krnay k bad minimum 1st idx per hogha isly usko exclude krdiya or max last idx per hogha
            sum+=nums[i];
            cnt++;
        }
        double avg=sum/cnt;
       return avg; 
        
    }
    
};


//optimised 
//TC:O(N)
class Solution {
public:
       double average(vector<int>& arr) {
         int minsal=INT_MAX;
           int maxsal=INT_MIN;
        double sum=0;
           int n=arr.size();
           
        for(int i=0;i<n;i++){
            minsal=min(minsal,arr[i]);
            maxsal=max(maxsal,arr[i]);
            sum+=arr[i];
        }
        sum=sum-minsal-maxsal;
        return sum/(n-2);
    }
};



