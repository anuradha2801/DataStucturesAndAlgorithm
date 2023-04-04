/*#include<bits/stdc++.h>
using namespace std;
int cdecimal_to_hexadecimal(int n)
{
    int x=1;
    int ans=0;
    while (n>0)
    {
        ans+=(n%16)*x;
        n/=16;
        x*=10;
    }
    return ans;
}/*
int main()
{
    int n;
    cin>>n;
    cout<<cdecimal_to_hexadecimal(n);
    return 0;
}*/
#include<stdio.h>

int main()
{
 /*  
int i=20;
int j;
i=(printf("hello"),printf(" all geeks "));
printf("%d",i);
    return 0;
    */
   char *s="FINE";
   *s='N';
   printf("%s",s);
}