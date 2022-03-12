class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
       
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        int maxi=0;
        nums[1] = max(nums[1], nums[0]); 
        for(int i=2 ; i<n ; i++){
            maxi = max((nums[i]+nums[i-2]), nums[i-1]); 
            nums[i] = maxi;
            
        }
        return nums[n-1];
    }
};

// the main objective in this ques is in every house, robber has two choice either rob the house ar skip.
// if he choose to rob he will get money i+(i-2)
// if he don't rob he will get i-1, so in every step we have to check max of i+(i-2) or i-1
//to avoid 0(n) extra space, we are using the same array or we can use two variable;
// in index 1, we have choice to choose