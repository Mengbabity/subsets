class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res={{}};
        int n=nums.size();
        if(n==0)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;)
        {
            int count=0;
            while(count+i<n && nums[count+i]==nums[i])
                count++;
            int s=res.size();
            for(int j=0;j<s;j++)
            {
                vector<int> tmp=res[j];
                for(int k=0;k<count;k++)
                {
                    tmp.push_back(nums[i]);
                    res.push_back(tmp);
                }
            }
            i+=count;
            
        }
        
        return res;
    }
};
