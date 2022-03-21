class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        /*vector<vector<int>> ans;
        vector<int> temp1;
        vector<int> temp2;
        temp1[0]=1;
        
        ans.push_back(temp1);
        if(numRows ==1 ) return ans;
        temp2[0]=1; temp2[1]=1;
        ans.push_back(temp2);
        if(numRows ==2) return ans;
        
        for(int i=3 ; i<=numRows; i++){
            vector<int> temp; 
            temp[0]=1;
            int j;
            for(j=1 ; j<i-1; j++){
                temp[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            temp[j]=1;
            ans.push_back(temp);
        }
        return ans;*/
        
        vector<vector<int>> res(numRows);
        
        res[0].push_back(1);
        for(int i=1;i<numRows ; i++){
             res[i].push_back(1);
            for(int j=1 ; j<res[i-1].size(); j++){
                res[i].push_back(res[i-1][j-1]+res[i-1][j]);
            }
            res[i].push_back(1);
        }
        return res;
    }
};

