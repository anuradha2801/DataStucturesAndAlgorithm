#include<bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(int flowerbed[], int n,int size) {
        int count=0;
        int mw=0;
      if(size%2!=0)  
      mw=(size/2)+1;
      else
       mw=size/2;
      cout<<mw<<endl;
       for(int i=1;i<size;i=i+2)
       {
        if(flowerbed[i-1]!=flowerbed[i])
        {
          count++;
         // flowerbed[i]=1;
        }
   
       } 
        cout<<count<<endl;
       if(mw-count>=n)
       return true;
       else
       return false;
    }
int main()
{
    int arr[7]={1,0,1,0,1,0,1};
    
   bool ans= canPlaceFlowers(arr, 0,7);
 cout<<ans;
    return 0;
}