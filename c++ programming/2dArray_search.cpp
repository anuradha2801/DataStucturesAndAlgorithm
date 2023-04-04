#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
int r=0,c=m-1;
bool flag=0;
while(r<n && c>=0)
{
    if(a[r][c]==target)
    {
        flag=1;
    }
    if(a[r][c]>target)
    {
        c--;
    }
    else{
        r++;
    }
}
if(flag)
{
    cout<<"it is present";
}
else{
    cout<<"it is not present";
}
return 0;
}