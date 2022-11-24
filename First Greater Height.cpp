// There are N students standing outside the class. The heights of these students is represented by a vector V.
// Every student j knows the height of each student i standing in front of him (j>i). Each student tries to find the smallest height Vi greater than him Vj standing in front of him.
// If such a student is the tallest among all students then print -1 for that student.

// Input Format:
// First-line contains the number of test case T.  Each test case contains N, the number of students and followed by the height of N students separated by spaces.

// Output Format:
// For each testcase, in a new line, print the next greater heights for each student.

// Explanation:
// Testcase1: For 3 (j=0) we won't have any element greater than 3 to the left (j>i). For 2 we have 3. For 5 we don't have any greater element. For 4 we have 5, and for 1 we have 2, 3, 4, 5 but we have to choose the smallest
// greater element, hence 2.

vector<int> greater_height(vector<int>v)
{
   
    //Your code here

    set<int> s;

    vector<int> ans;

    

    for(int i= 0; i<v.size(); i++){

        auto it = s.upper_bound(v[i]);

        if(it!=s.end())

            ans.push_back(*it);

        else

            ans.push_back(-1);

        s.insert(v[i]);

    }

    

    return ans;

    


}