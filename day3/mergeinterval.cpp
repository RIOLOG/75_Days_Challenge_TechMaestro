class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        int  n=intervals.size();
        int start=intervals[0][0];
        int end=intervals[0][1];
        int i=1;
        vector<vector<int>>ans;
        
        while(i<n)
        {
            if (end>=intervals[i][0])
            {
                end=max(end,intervals[i][1]);
            }
            else
            {
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            i+=1;
        }
        ans.push_back({start,end});
        return ans;
    }
};
