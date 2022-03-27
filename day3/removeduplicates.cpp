class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count=0;
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]!=nums[count])
            {
                count+=1;
                nums[count] = nums[i];
            }
        }
        return count+1;
    }
};
