#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       
        int n;cin>>n;
        int m;cin>>m;
        int arr[m][n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }

        int arr1[n];
    for(int i=0;i<n;i++)
    {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int diff=0;
        for(int j=0;j<m;j++)
        {
            int element=arr[i][j];
            mini=min(mini,element);
            maxi=max(maxi,element);
            
        }
    diff=maxi-mini;
    arr1[i]=diff;
    }

    int ans=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
         ans=max(ans,arr1[i]);
    }
    cout<<ans<<endl;
    }
    return 0;
}