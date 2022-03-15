class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        string res;
        
        int count = 0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='(' ) count++;
            
            else if(s[i] == ')'){
                if(count==0){
                    s[i]='#';
                }
                
                else{
                    count--;
                }
            }
        }
        
        //backward travaersal needed if there are opening brackets in the end and no closing bracket for them
        count = 0;
        for(int i=n-1 ; i>=0 ; i--){
            if(s[i]==')' ) count++;
            
            else if(s[i] == '('){
                if(count==0){
                    s[i]='#';
                }
                
                else{
                    count--;
                }
            }
        }
        
        for(int i=0 ; i<n ; i++){
            if(s[i]!='#') res.push_back(s[i]);
        }
        return res;
    }
};