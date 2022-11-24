// Given a string str, return the string with all distinct characters from the string without using sorting algorithm.
// Input:
// abdbc

// Output:
// abcd

string Sorted_Characters(string str)
{
    // Your Code Here
    set<char>st;
    for(auto it:str){
        st.insert(it);
    }
    return string(st.begin(),st.end());
}