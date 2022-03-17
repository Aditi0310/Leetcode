class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int score = 0;
        for(int i =0 ; i<s.length() ; i++){
            int val = 0;
            if(s[i] == '(')     st.push(0);
            else if(s[i] == ')') {
                /*if(st.top() == 0){
                    st.pop();
                    st.push(1);
                }*/
                
                while(st.top()!= 0){
                    int item = st.top();
                    st.pop();
                    val+=item;
                }
                val = max(2*val, 1);
                st.pop();
                st.push(val);
                
            }
        }
        
        while(!st.empty()){
            score+=st.top();
            st.pop();
        }
        
        return score;
    }
};