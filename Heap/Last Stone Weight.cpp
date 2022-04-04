//Last Stone Weight
https://leetcode.com/problems/last-stone-weight/submissions/


class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>maxh;
        for(int i=0;i<arr.size();i++){
            maxh.push(arr[i]);
          }
            
            while(maxh.size()>0) 
            {   
               if(maxh.size()==1)
                  return maxh.top();
                
                int x=maxh.top();
                maxh.pop();
                int y=maxh.top();
                maxh.pop();
                if(x!=y)
                    maxh.push(x-y);
                 
            }
        return 0;
    }
            
};
//TC: O(nlogn)
        
       
        
        

