#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,ans=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        ans=ans^arr[i];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
