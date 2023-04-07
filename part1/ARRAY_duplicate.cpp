#include<bits\stdc++.h>//condition given that the contains all the n-1 elements each tym

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++ )
    {
        cin>>a[i];
    }
int ans=0;
for(int i=0;i<n;i++)
{
    ans=ans^a[i];
}
for(int i=1;i<n;i++)
{
    ans=ans^i;
}
cout<<ans;
return 0;
}
//find all duplicates in an array-leetcode