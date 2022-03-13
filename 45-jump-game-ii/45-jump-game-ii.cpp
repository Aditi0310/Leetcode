class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int maxReach = 0;
        int currReach = 0;
        
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(i+nums[i] > maxReach) maxReach = i+nums[i];     //max jump from a cell
            
            if(i==currReach){           // if we reached the maxReach of a cell, to go ahead                                                we have to increase the jump
                jump++;
                currReach = maxReach;
            }
        }
        return jump;
    }
};

//in this, we will go to the maximum jump possible and explore all the previous steps before that maxReach
//we are not including the last element because it will increase the reach by 1.