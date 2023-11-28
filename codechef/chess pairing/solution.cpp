#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	int n,x;
	while(t--){
	    cin>>n>>x;
	    if(x<=n){
	        cout<<0<<endl;
	    }
	    else if(x>n){
	        cout<<2*(x-n)<<endl;
	        
	    }
	        
	 
	}
	
	return 0;
}
