//find the largest word in a sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin>>a;
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int currLen=0;
    int maxlen=0;
    int st=0;
    int maxst=0;

    while(1)
    {

     /*   if(a[i]==' ' || a[i]=='\0')
        {
            if(currLen>maxlen)
            {
                maxlen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }else{
       currLen++;
        }
       
        if(a[i]=='\0')
        {
            break;
        }
        i++;

    }
   cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++)
    cout<<a[i+maxst];*/
    
    return 0;
}