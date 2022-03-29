class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int>v;
        int row = matrix.size();
        if (row==0)
        {
            return v;
        }
        int col = matrix[0].size();
        
        int l=0 ,r=col-1 ,t=0,b=row-1,d=0;
        
        while(l<=r and t<=b)
        {
            if (d==0)
            {
                for (int i=l;i<=r;i++)
                {
                    v.push_back(matrix[t][i]);
                }
                d=1;
                t++;
            }
            else if (d==1)
            {
               for (int i=t;i<=b;i++)
               {
                   v.push_back(matrix[i][r]);
               }
                d=2;
                r--;
            }
            else if (d==2)
            {
                for (int i=r;i>=l;i--)
                {
                    v.push_back(matrix[b][i]);
                }
                d=3;
                b--;
            }
            else if (d==3)
            {
                for (int i=b;i>=t;i--)
                {
                    v.push_back(matrix[i][l]);
                }
                d=0;
                l++;
            }
        }
        return v;
        
        
    }
};
