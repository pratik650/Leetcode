//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
 public:
    long long int count = 0;

    void merge(long long arr[], long long left, long long mid, long long right) {
        const long long subArrayOne = mid - left + 1;
        const long long subArrayTwo = right - mid;

        auto* leftArray = new long long[subArrayOne];
        auto* rightArray = new long long[subArrayTwo];

        for (long long i = 0; i < subArrayOne; i++)
            leftArray[i] = arr[left + i];
        for (long long j = 0; j < subArrayTwo; j++)
            rightArray[j] = arr[mid + 1 + j];

        long long indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
        long long indexOfMergedArray = left;

        while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
            if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
                arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            } else {
                arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
                count += (subArrayOne - indexOfSubArrayOne);
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }

        while (indexOfSubArrayOne < subArrayOne) {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
        }

        while (indexOfSubArrayTwo < subArrayTwo) {
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
        }

        delete[] leftArray;
        delete[] rightArray;
    }

    void mergeSort(long long arr[], long long begin, long long end) {
        if (begin >= end)
            return;

        long long mid = begin + (end - begin) / 2;
        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }

    long long int inversionCount(long long arr[], long long N) {
        count = 0;
        mergeSort(arr, 0, N - 1);
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends