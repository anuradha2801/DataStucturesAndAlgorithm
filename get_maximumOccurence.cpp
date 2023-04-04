#include<bits\stdc++.h>
using namespace std;
char getMaxOccCharater(string s)
{
    int arr[26]={0};
    //create an array of count of character
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z')
        {
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
//finding maximum occurance
int maxi=-1;
int ans=0;
for(int i=0;i<26;i++)
{
    if(maxi<arr[i])
    {
      ans=i;
       maxi=arr[i];
    }
}
return 'a'+ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<getMaxOccCharater(s);
    return 0;
}