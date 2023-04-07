#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int ec=0;
	int oc=0;
	for(int i=0;i<n;i++)
	{
        cin>>arr[i];
	    if((arr[i]%2)==0)
	    {
	        ec++;
	    }else{
	        oc++;
	    }
	}
	cout<<ec<<" "<<oc<<endl;
	if(ec>oc)
	{
	    cout<<"READY FOR BATTLE"<<endl;
	}else{
	    cout<<"NOT READY"<<endl;
	}
	return 0;
}
