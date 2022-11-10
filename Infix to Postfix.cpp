// Convert Infix expression to Postfix expression 

/* C++ implementation to convert
infix expression to postfix*/

#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int priority(char ch){
        if (ch == '+' or ch == '-')  return 1;
        else if (ch == '/' or ch == '*') return 2;
        else if (ch == '^')  return 3;
        
        return 0;
    }
    string infixToPostfix(string s) {
        
        string ans = "";
        stack <char> st;
        
        for (int i = 0; i<s.length(); i++){
            char ch = s[i];
            if ( ('a' <= ch and ch <= 'z') or ('A' <= ch and ch <= 'Z') ){
                ans += ch;
                
            }else if (ch == '('){
                st.push(ch);
                
            }
            else if (ch == ')'){
                while (st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                
            }
            else {
                while (!st.empty() and (priority(st.top()) >=priority(ch))){
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while (!st.empty()) {
            ans+= st.top();
            st.pop();
        }
        
        return ans;
        
    }
// Driver's code
int main()
{
	string exp = "a+b*(c^d-e)^(f+g*h)-i";

	// Function call
	infixToPostfix(exp);
	return 0;
}
