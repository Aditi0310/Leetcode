class Solution {
public:
    int find(vector<int>& nums, int l, int r){
        
        int maxi=0;
        
        
        int first = 0, second = 0;
        for(int i=l ; i<=r ; i++){
            maxi = max((nums[i]+first), second);
            first = second;
            second = maxi;
            
        }
        return second;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
       
        int first = find(nums, 0, n-2);
        int second = find(nums, 1, n-1);
        
        return max(first, second);
    }
};