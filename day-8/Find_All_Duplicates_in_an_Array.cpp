class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        //space: O(n)
//         unordered_map<int,int>mp;
//         int n=nums.size();
//         for (int i=0;i<n;i++)
//         {
//             mp[nums[i]]++;
//         }
        
//         vector<int>ans;
//         for (auto x:mp)
//         {
//             if (x.second>1)
//             {
//                 ans.push_back(x.first);
//             }
//         }
            
//         return ans;
        
        //constant space:
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for (int i=1;i<n;i++)
        {
            if (nums[i-1] == nums[i])
            {
                swap(nums[count],nums[i]);
                count+=1;
            }
        }
        for (int i=count;i<n;i++)
        {
            nums.pop_back();
        }
        return nums;
    }
};
