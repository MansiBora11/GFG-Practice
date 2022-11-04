//Given an integer array Arr of size N. 
// For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. 
// If next element is smaller, update the current index to that element. If not, then  -1.

class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    for(int i=0;i<n-1;i++){
	        arr[i]=(arr[i]>arr[i+1])?arr[i+1]:-1;
	    }
	    arr[n-1]=-1;
	}

};