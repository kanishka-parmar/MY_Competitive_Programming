#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	 long int n,y,orop=0;
	 cin>>n>>y;
	 long int a[n];
	 for(int i=0;i<n;i++){
	     cin>>a[i];
	     orop=orop|a[i];
	 }
	 if(orop==y){
	 cout<<0<<endl;}
	 else if(((y-orop)|orop)==y){
	     cout<<y-orop<<endl;
	     
	 }
	 else{
	     cout<<-1<<endl;
	 }
	}
	return 0;
}