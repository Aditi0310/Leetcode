class Solution {
public:
    int fib(int n) {
        int first=0, second=1, num, i;
        if(n==0) return 0;
        for(i=2; i<=n ; i++){
            num=first+second;
            first = second;
            second = num;
        }
        return second;
    }
};

//we can do this by taking an array and return the last element but this will save the space and needs only two variable;