//Circular tour
https://practice.geeksforgeeks.org/problems/circular-tour/1#

class Solution{
  public:
  
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0;
       int extrafuel=0;
       int reqfuel=0;
       
       for(int i=0;i<n;i++){
           extrafuel+=(p[i].petrol-p[i].distance);
           
           if(extrafuel<0){
               start=i+1;
               reqfuel+=extrafuel;
               extrafuel=0;
           }
       }
       if(reqfuel+extrafuel>=0){
       return start;
       }
       return -1;
       
    }
    
};

//Gas Station (leetcode)

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int extrafuel=0;
        int reqfuel=0;
        
        for(int i=0;i<gas.size();i++){
            extrafuel+=(gas[i]-cost[i]);
            if(extrafuel<0){
                start=i+1;
                reqfuel+=extrafuel;
                extrafuel=0;
            }
        }
        if(reqfuel+extrafuel>=0)return start;
        return -1;
    }
};


