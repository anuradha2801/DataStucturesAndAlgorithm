#include <iostream>
#include<string>
using namespace std;


void ans(string n, int a)
{

    int flage=0;
      for(int i=0;i<a;i++)
      {
          if(n[i]=='0' || n[i]=='5')
          {
              flage=1;
              break;
              
          }
      }
	    
	    if(flage==1)
	    {
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
}

int main() {
	int tc;
	cin>>tc;
	int a;
	string n;
	string temp;

	for ( int i=0;i<tc;i++) {
	    /* code */
	    cin>>a;
	   // cin>>temp;
	    cin>>n;
	   ans(n,a);
	}
	return 0;
}
