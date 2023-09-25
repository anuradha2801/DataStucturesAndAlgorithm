#include<bits/stdc++.h>
using namespace std;

vector<int>funcSort(vector<int>inputList,int num)
{
    sort(inputList.begin(),inputList.begin()+num-1);
    sort(inputList.begin()+num ,inputList.end(),greater<int>());
    return inputList;
}


int main()
{
    vector<int>inputList={11,7,5,10,46,23,16,8};
    vector<int> ans=funcSort(inputList, 3);
    for(int i=0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}