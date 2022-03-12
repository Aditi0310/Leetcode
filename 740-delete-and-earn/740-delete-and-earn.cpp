class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int count[10001] = {0}; //to store the frequency
        
        for(int i=0 ; i<n ; i++){
            count[nums[i]]++;
        }
        
       // count[0] = 0;
        int maxi = 0;
        int first = 0;
        int second = count[1];
        for(int i=2; i<10001 ; i++){
            int sum1 = count[i]*i;
            
            maxi = max(sum1+first , second);
            first = second;
            second = maxi;
        }
        return second;
    }
};

//same as house robber, if we can see the array in sorted order, we can see either we can pick the sum of i+(i-2) or sum of (i-1)