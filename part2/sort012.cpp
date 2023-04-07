#include <iostream>
using namespace std;
/*
void sort012(int *arr, int n)
{
    int zc = 0;
    int oc = 0;
    int tc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 )
        {
            zc++;
        }
        if (arr[i] == 1)
        {
            oc++;
        }
        if(arr[i]==2){
            tc++;
        }
    }
cout<<zc<<"  "<<oc<<" "<<tc<<" "<<endl;
    for (int i = 0; i < n; i++)
    {
        if(zc > 0)
        {
            arr[i] =0;
            zc--;
        }
        else if(oc > 0)
        {
            arr[i] = 1;
            oc--;
        }
        else if(tc > 0)
        {
            arr[i] = 2;
            tc--;
        }
    }
cout<<zc<<"  "<<oc<<" "<<tc<<" "<<endl;
}
*/

 void sort012(int *a, int n)
    {
        int zc=0;
        int oc=0;
        int tc=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                zc++;
            }
            if(a[i]==1)
            {
                oc++;
            }
            if(a[i]==2)
            {
                tc++;
        }
            
        }
        
      for(int i=0;i<n;i++){
         if(zc>0)
          {
              a[i]=0;
              zc--;
              
          }
          else if(oc>0)
          {
              a[i]=1;
              oc--;
          }
          else if(tc)
          {
              a[i]=2;
              tc--;
          }
          
      }
    }
    

int main()
{
    int a[5] = {0, 2, 1, 2,0};
    sort012(a, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}