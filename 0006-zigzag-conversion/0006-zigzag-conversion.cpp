class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> vct (numRows);
        
        if(numRows==1) return s;
        
        bool flag = false;
        int i=0;
        for(auto ch:s){
            vct[i]+=ch;
            
            if(i==0 || i==numRows-1){
                flag = !flag;
            }
            
            if(flag) i++;
            else i--;
        }
        
        string zigzag;
        
        for(auto ch:vct){
            zigzag+=ch;
        }
        
        return zigzag;
    }
};