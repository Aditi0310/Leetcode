class Solution {
public:
    int climbStairs(int n) {
        int first = 0;
        int sec = 1;
        int third = 2;
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        
        int num;
        for(int i=3 ; i<=n ; i++){
            num = sec+third;
            sec = third;
            third = num;
        }
        return third;
    }
};

// it will be  nth = n-1 + (n-2) because if we take add 1 step in previous step, and 2 steps in 2nd previous we will reach in nth step.