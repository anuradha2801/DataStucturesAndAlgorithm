#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            
        }
    }

    int starting_row=0;
    int starting_col=0;
    int ending_row=n-1;
    int ending_col=m-1;

    while(starting_row<=ending_row && starting_col<=ending_col)
    {
        //for printing starting row
        for(int index=starting_col;index<=ending_col;index++)
        {
            cout<<arr[starting_row][index]<<" ";
        }starting_row++;
        //for printing last column
        for(int index=starting_row;index<=ending_row;index++)
        {
            cout<<arr[index][ending_col]<<" ";
        }ending_col--;
        //for printing ending row
        for(int index=ending_col;index>=starting_col;index--)
        {
            cout<<arr[ending_row][index]<<" ";
        }ending_row--;
        //for printing starting column
        for(int index=ending_row;index>=starting_row;index--)
        {
            cout<<arr[index][starting_col]<<" ";
        }starting_col++;
    }
    return 0;
}