class Solution {
public:
    int fib(int n) {
     
        if(n==1) return 1;
        if(n==0) return 0;
        int prev=1;
        int prev2=0;
        for(int i=2;i<=n;i++){
            int sum = prev + prev2;
            prev2=prev;
            prev= sum;
        }
        
        return prev;
    }
};