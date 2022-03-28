class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ans=0;
        int n=height.size();
        int low=0;
        int high=n-1;
        
        while(low<high)
        {
            int left=height[low];
            int right=height[high];
            int mini=min(left,right);
            
            ans=max(ans,mini*(high-low));
            
            if (left<right)
            {
                low+=1;
            }
            else
            {
                high-=1;
            }
        }
        return ans;

    }
};
