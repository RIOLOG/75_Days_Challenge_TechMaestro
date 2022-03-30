class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        vector<int>rem(60,0);
        int count=0;
        for (int i=0;i<time.size();i++)
        {
            int a=time[i]%60;
            if (a==0)
            {
                count+=rem[0];
            }
            else
            {
                count+=rem[60-a];
            }
            rem[a]++;
        }
        return count;
    }
};
