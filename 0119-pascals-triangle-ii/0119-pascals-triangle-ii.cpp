class Solution {
public:
    vector<int> getRow(int rowIndex) {
     
        vector<int> res;
        
        long int coff=1;
        
        for(int i=0;i<rowIndex+1;i++){
            res.push_back(coff);
            coff=coff*(rowIndex-i)/(i+1);
        }
        return res;
    }
};