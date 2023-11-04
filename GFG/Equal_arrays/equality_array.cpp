#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<long long> A, vector<long long> B, int n) {
        int c=0;
      sort(A.begin(),A.end());
      sort(B.begin(),B.end());
     for(int i=0;i<n;i++){
         if(A[i]!=B[i]){
             c++;
         }
     }
     if(c==0){
         return true;
     }
     else{
         return false;
     }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n,0),brr(n,0);
        for(long long i=0;i<n;i++)
          cin>>arr[i];
        for(long long i=0;i<n;i++)
           cin>>brr[i];
        Solution ob;
        cout<<ob.check(arr,brr,n)<<endl;
    }
    return 0;
}