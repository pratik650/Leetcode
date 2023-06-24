class Solution {
public:
    bool rotateString(string s, string goal) {
        
     int count=0;
        
     if(s.size()!=goal.size()) return false;
     else{
     while(count!=s.size()){
            char t=s.at(0); 
            s.erase(s.begin() + 0);
            cout<<s[count];
            s.push_back(t);
            if(s==goal) return true;
            count++;
        }   
        
     }
           
        
        if(count==s.size()) return false;
        
        return false;
    }
};