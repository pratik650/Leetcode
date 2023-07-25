class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
    
        int count;
        for(int i=0;i<arr.size();i++){
            if( i+2 <= arr.size()){
                 if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
                      count=i+1;
                      break;
                  }
            }
            }
                    
    return count;
    }
};