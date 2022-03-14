//Robots
https://practice.geeksforgeeks.org/problems/d35adfbe367861ec1e67bea6e0efebe0a0ee3550/1#

class Solution{   
public:
    string moveRobots(string s1, string s2){
        // code here 
        //A bot can only move left while B can only move right and A bot can only move left while B can only move right.
        int i=0,j=0;
        int n=s1.length();
        
        while(i<n and j<n){
            //case1
           if(s1[i]=='#') i++;
           else if(s2[j]=='#') j++;
           
           //case2
           else if (s1[i]!=s2[j])return "No";
           //case 3
           else if(s1[i]=='B' and i>j )//B can only move right
           //i jab greater hogh j say tab wo left side nh jaskat then return no
           return"No";
           else if(s1[i]=='A' and i<j)return "No";
           else{
              i++;
              j++;//if all the cases are true then update i or j 
           } 
           
        }
        return "Yes"; //if all cases are right
        
    }
};

/*     # B # A #   
       i
       
       # # B A #
       j
       
       i or j both pointer ko move kro until they both are  # 
       jab char ayegha tab check kreghy ki dono char same h or not if both are not  same then return 
       if both are same then b can move right and a can move left
       
       
    */
