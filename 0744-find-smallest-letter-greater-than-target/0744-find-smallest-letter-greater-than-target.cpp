class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        
        char res;
        int count=0;
        
        for(int i=0;i<letters.size();i++){
            
            if(letters[i]>target){
                cout<<letters[i]<<">"<<target<<endl;
                res = letters[i];
                count++;
                break;
            }
        }
        if(count==0) return letters[0];
        return res;
    }
};