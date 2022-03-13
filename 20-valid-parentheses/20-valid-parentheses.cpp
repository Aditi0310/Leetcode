class Solution {
public: 
    bool isValid(string s) {
        
        stack<char> st;
        
        for(auto i : s){
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }
            // else part if stack is empty or closing bracket will not match from respective opening bracket.
            
            else{
                if(st.empty() || (i==')' && st.top()!='(') || (i=='}' && st.top()!='{') 
                  || (i==']' && st.top()!='[')) return false;
                
                //if matches
                st.pop();
            }
        }
        
        //if anything extra bracket remains in stack
        return st.empty();
        
        
    }
};