#include<bits/stdc++.h>
using namespace std;

int count_four(int n){
 int count=0;
while (n>0)
{
  int last_digit=n%10;
  if(last_digit==4)
  {
      count++;
  }
  n=n/10;
}
return count;


}
int main()
{
    int t,n;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        
        cin>>n;
     cout<< count_four(n)<<endl;
    }
    return 0;
}