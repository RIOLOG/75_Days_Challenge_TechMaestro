class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        //USING HASHMAP:
        map<pair<int,int>,int>mp;
        for (int i=0; i<nums.size() ;i++)
        {
            for (int j=0 ;j<nums.size() ;j++)
            {
                if ((nums[i]-nums[j]==k and i!=j) and mp.find({nums[i],nums[j]})==mp.end())
                {
                    mp[{nums[i] , nums[j]}]++;
                }
            }
        }
        return mp.size();
    }
};
