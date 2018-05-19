class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return {{}};
        int nn=pow(2,n);
        
        vector<vector<int>> res(nn,vector<int> ());
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nn;j++)
                if((j>>i) & 1)
                    res[j].push_back(nums[i]);
        }
        
        return res;
    }
};
