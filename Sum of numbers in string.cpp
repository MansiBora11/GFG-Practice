class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	string temp=" ";
    	int sum=0;
    	
    	for(char ch: str){
    	    if(isdigit(ch))
    	    temp+=ch;
    	    
    	    else{
    	        sum+=atoi(temp.c_str());
    	        temp=" ";
    	    }
    	    
    	}
    	return sum+atoi(temp.c_str());
    	// Your code here
    	
    }
};