class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        
        for(int i=0;i<S.length();i++){
            char c=S[i];
            if(c>='0'&&c<='9')
                st.push(c-'0');
            else{
                int x=st.top();
                st.pop();
                
                int y=st.top();
                st.pop();
                
                if(c=='+'){
                    st.push(y+x);
                }
                    
                else if(c=='-'){
                    st.push(y-x);
                }
                else if(c=='*'){
                    st.push(y*x);
                }
                else if(c=='/'){
                    st.push(y/x);
                }
                }
            }
            return st.top();
        }
    
};