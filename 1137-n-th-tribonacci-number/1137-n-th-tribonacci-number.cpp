class Solution {
public:
    int tribonacci(int n) {
        int first=0, second=1, third=1, num, i;
        if(n==0) return 0;
        if(n==1|| n==2) return 1;
        for(i=3; i<=n; i++){
            num = first+second+third;
            first=second;
            second=third;
            third=num;
        }
        return third;
    }
};

//same as nth fibonacci no.