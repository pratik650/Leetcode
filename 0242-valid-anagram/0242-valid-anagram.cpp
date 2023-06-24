class Solution {
public:
    bool isAnagram(string s, string t) {
        int count=0;
        if(s.size()!=t.size()) return false;
        
        for(int i=0;i<s.size();i++){
            
            for(int j=0;j<s.size();j++){
                if(s[i]==t[j]){
                     t.erase(t.begin() + j);
                     break;
                }
               
            }
        }
        
        if(t.size()==0 && count ==0 ) return true;
        
        return false;
        
    }
};