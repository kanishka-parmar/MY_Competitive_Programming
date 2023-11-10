#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    for(int i=0;i<n;i++){
	        int j=i+1;
	        if(arr[i]>arr[j]){
	            arr[i]=arr[j];
	        }
	        else{
	            arr[i]=-1;
	        }
	        
	    }
        
	    arr[n-1]=-1;
	}


};