//Smaller on Left 
https://practice.geeksforgeeks.org/problems/smaller-on-left20360700/1#

vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    //apply binar search 
    //use set :: ye ascending order m kreghy no ko
    vector<int> ans;
    set<int>s;
    //check in set for cur. no ki ussay choota set m present h agr ho to ans m push kro agar nh h then -1 return kro
    for(int i=0;i<n;i++){
        //lower bound and upper bound fun return pointer of that particular element isly  uska type pointer hona chahiye 
        //tabhi auto use kiya h woo automatic pointer type lay layegha
        auto idx= s.lower_bound(arr[i]);//it will return nxt greater no ka address milegha suppose 2 search kiya to 3 ka address milegha
        if(idx==s.begin()){//for 2 set m empty h to -1 return hogha
        //this means set m koi bhi no nh h jo 2 say small h
             ans.push_back(-1);
        }
        else{
            idx--;
            ans.push_back(*idx);//pointer address return krta h isly agar value chahiye then use * 
            
        }
        s.insert(arr[i]);//2 ko set m insert krdo
            
        
    }
    return ans;
    
}
