//Maximize sum(arr[i]*i) of an Array
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int Maximize(int arr[],int n)
    { long long sum=0;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
           sum+= (static_cast<long long>(arr[i]) * i);
        
        }
        sum=sum%(1000000000+7);
        return static_cast<int>(sum);
    }
};