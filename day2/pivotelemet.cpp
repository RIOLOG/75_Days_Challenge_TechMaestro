#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nums[]={1,7,3,6,5,6};
    int n=6;
    vector<int> pref(n);
    pref[0] = 0;
    for(int i= 1; i< n; i++)
    {
        pref[i] = pref[i-1] + nums[i-1]; 
    }
     for (int i=0;i<n;i++)
    {
        cout<<pref[i]<<" ";
    }
    cout<<"\n";
    vector<int> suff(n);
    suff[n-1] = 0;
    for(int i= n-2; i>= 0; i--)
    {
        suff[i] = suff[i+1] + nums[i+1]; 
    }
    for (int i=0;i<n;i++)
    {
        cout<<suff[i]<<" ";
    }
    cout<<"\n";
    for(int i= 0; i< n; i++)
    {
        if(pref[i] == suff[i])
        {
                cout<< i;
        }
    }
    return -1;
}
