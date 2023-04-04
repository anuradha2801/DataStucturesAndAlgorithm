//to count the total number of 1 in a binary number
#include<bits/stdc++.h>
using namespace std;

int number_of_1(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n & (n-1);
        count++;
    }
    return count;
}
int main()
{

     cout<<number_of_1(19)<<endl;
     return 0;
}