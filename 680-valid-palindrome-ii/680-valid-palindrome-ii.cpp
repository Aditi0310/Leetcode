class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r = s.length()-1;
        int count1 = 0; 
        while(l<r){
            
                
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                l++;
                count1++;
            }
            
        }
        
         l=0;
         r = s.length()-1;
        int count2 = 0; 
        while(l<r){
            
                
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                r--;
                count2++;
            }
            
        }
        
        if(count1<=1 || count2<=1) return true;
        else return false;
    }
};