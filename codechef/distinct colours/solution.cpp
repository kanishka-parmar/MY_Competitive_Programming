#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,b=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(b<arr[i]){
	            b=arr[i];
	        }
	    }
	    cout<<b<<endl;
	}
	return 0;
}
