class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int minp = INT_MAX;
        int diff = 0;
        for(int i=0 ; i<n ; i++){
            minp = min(minp, prices[i]);
            diff = max(diff, prices[i]-minp);
        }
        return diff;
    }
};

//we can solve this in O(n*n) by iterating two loops
//here we will keep track of min. in the array and then the diff. b/w arr[i]-min.
