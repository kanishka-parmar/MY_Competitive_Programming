#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
       vector<long long> fib;
       if(n==1){
         fib.push_back(1);  
       }
       else if(n==2){
          fib.push_back(1);
           fib.push_back(1);
       }
      else{
          fib.push_back(1);
           fib.push_back(1);
       long long a=1,b=1,c;
       for(int i=0;i<n-2;i++){
       c=a+b;
       fib.push_back(c);
       a=b;
       b=c;
       }
      }
       return fib;
    }
};