//Evaluation of Postfix Expression (gfg)
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        int n=S.length();
        for(int i=0;i<n;i++){//traverse in stack
        //checking char is operator or operand
        if(S[i]>='0'&& S[i]<='9'){//this means ye operand h
        st.push(S[i]-'0');//cconvert in string
            
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch(S[i])
            {
                case'+':
                st.push(op1+op2);
                break;
                case'-':
                st.push(op1-op2);
                break;
                case'*':
                st.push(op1*op2);
                break;
                case'/':
                st.push(op1/op2);
                break;
            }
         }
        
            
        }
        return st.top();
    }
};
