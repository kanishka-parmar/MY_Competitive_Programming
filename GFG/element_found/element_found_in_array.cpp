class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int n, int X)
    {
       for(int i=0;i<n;i++){
           if(arr[i]==X){
               return i;
               break;
           }
           
       } 
       return -1;
    }

};