class Solution {
public:
    string largestOddNumber(string num) {
        string st;
        int t=num.size();
        if(num[t-1]%2!=0) return num;
        if(t==1) return st;
       
       
         for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2==0){
                num.erase(i,1);
            }
             else return num;
        }
        
        return num;
    }
};