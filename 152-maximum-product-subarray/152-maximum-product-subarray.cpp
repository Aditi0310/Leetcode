class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0]; //2
        int cur_max=nums[0], cur_min=nums[0];
        
        for(int i=1 ; i<nums.size() ; i++){
            
            if(nums[i]<0) swap(cur_max, cur_min);
        
            
            cur_max = max(nums[i], cur_max*nums[i]); //either we can start from that digit or carry forward the previous
            cur_min = min(nums[i], cur_min*nums[i]); //
            
            maxi = max(maxi, cur_max);//5
        }
        
        return maxi;
    }
};

//5 -2 -3 -4 5