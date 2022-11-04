// Next Greater Element

// Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

// Code:
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>v;
        stack<long long>st;
        st.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty()&&st.top()<=arr[i])
                st.pop();
            
        long long ng=(st.empty())?(-1):(st.top());
        v.push_back(ng);
        st.push(arr[i]);
                    
        }
        reverse(v.begin(),v.end());
        return v;
    }
};