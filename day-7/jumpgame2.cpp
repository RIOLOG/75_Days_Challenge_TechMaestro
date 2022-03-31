class Solution {
public:
    int jump(vector<int>& nums)
    {
        int ans=0;
        int reach=0;
        int n=nums.size();
        int curr=0;
        
        for (int i=0;i<n-1;i++)
        {
            if (i+nums[i] > curr)
            {
                curr= i+nums[i];
            }
            
            if (i == reach)
            {
                ans+=1;
                reach = curr;
            }
        }
        
        return ans;
    }
};
