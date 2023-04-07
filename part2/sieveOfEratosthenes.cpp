#include <bits\stdc++.h>
using namespace std;

void prime(int n)
{

    vector<bool> prime(n + 1, true);
    // cout<<prime.size()<<endl;
    // prime[0]=prime[1]=false;
    // int prime[100]={0};
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << " ";
        }
    }
}


int main(){
cout<<"enter a number upto which you want to print prime numbers:"<<endl;
int n;
cin>>n;
prime(n);
    return 0;
}