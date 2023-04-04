#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={10,7,4,6,8,10,11};
    int pd=arr[1]-arr[0];
    int curr=2;
    int ans=2;
    for(int i=0;i<7;i++)
    {
        if(pd==arr[i]-arr[i-1])
        {
            curr++;
        }  
        else{
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans;
    return 0;
}