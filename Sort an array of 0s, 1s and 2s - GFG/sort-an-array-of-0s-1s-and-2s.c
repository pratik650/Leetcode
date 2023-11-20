//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C
 void swap(int arr[],int i,int j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
 
   void sort012(int a[], int n)
   {
       //DNF SORT
       int low=0,mid=0,high=n-1;
       while(mid<=high){
           if(a[mid]==0){
               swap(a,mid,low);
               low++;mid++;
           }
         else  if(a[mid]==1){
               mid++;
           }
          else{
              swap(a,mid,high);
              high--;
          } 
         
    }}

//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends