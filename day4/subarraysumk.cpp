class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int count=0;
        unordered_map<int,int>mp;
        int sum=0;
        for (int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if (sum==k)
            {
                count+=1;
            }
            if(mp.find(sum-k)!=mp.end())
            {
                count=count+mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
  
};
