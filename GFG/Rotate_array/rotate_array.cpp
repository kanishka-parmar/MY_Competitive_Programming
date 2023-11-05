
void rotate(int arr[], int n)
{   int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    int last=arr[n-1];
    for(int i=1;i<n;i++){
        arr[i]=brr[i-1];
    }
    arr[0]=last;
    
}