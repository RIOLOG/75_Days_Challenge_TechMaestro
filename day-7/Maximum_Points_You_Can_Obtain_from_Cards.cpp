class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k)
    {
        //find sum:
        int n=cardPoints.size();
        int total_sum=0;
        for (int i=0;i<n;i++)
        {
            total_sum+=cardPoints[i];
        }
        
        //base case:
        if (k==n)
        {
            return total_sum;
        }
        
        //sliding window:
        int w_size=n-k;
        int ans=0;
        int sum=0;
        int ws=0;
        
        for (int we=0;we<n;we++)
        {
            sum=sum+cardPoints[we];
            if (we-ws+1==w_size)
            {
                ans=max(ans,total_sum-sum);
                sum=sum-cardPoints[ws];
                ws+=1;
            }
        }
        
        return ans;
    }
};
