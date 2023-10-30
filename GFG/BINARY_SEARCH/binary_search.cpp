#include<iostream>
using namespace std;
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l=0,m,h=n-1;
      while(l<=h){
          m=(l+h)/2;
      if(arr[m]==k){
          return m;
         
      }
      else if(arr[m]<k){
          l=m+1;
      }
      else{
          h=m-1;
      }
         
      }
      return -1;
    }
};