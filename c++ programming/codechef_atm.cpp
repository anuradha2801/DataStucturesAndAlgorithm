/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x;
    
    cin>>fixed>>setprecision(2)>>y;
    double ans=(y-x);
    double fa=ans-0.50;
        if(x%5==0 && (double)x<y)
        {
        cout<<fixed<<setprecision(2)<<fa;
    }
    if(x>y){
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    else{
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x>>y;
    
        if(x%5==0 && x+0.50<y)
        {
        cout<<y-x-0.50;
    }
    else
        cout<<fixed<<setprecision(2)<<y;
    return 0;
}