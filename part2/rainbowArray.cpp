#include <iostream>
using namespace std;

bool rainbow(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int flage=1;
    if(arr[s]!=1 &&arr[e]!=1)
      {
        flage=0;
       }
    while(s<e)
    {
         if(arr[s]!=arr[e])
         {
             flage= 0;
         }else if(arr[s]!=arr[s+1] && arr[s+1]!=arr[s]+1)
         {
             flage=0;
         }
         s++;e--;
    }
    if(arr[s]==7 && flage==1)
    {
        return true;
    }else{
        return false;
    }
}

int main() {
	// your code goes here

	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++)
	{
	    	
	    	int n;
	    	cin>>n;
	    	int arr[n];
	    	for(int i=0;i<n;i++)
	    	{
	    	    cin>>arr[i];
	    	}
    if(rainbow(arr,n))
    {
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
	    
	}
	return 0;
}
