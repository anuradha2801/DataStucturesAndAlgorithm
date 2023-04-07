#include <bits\stdc++.h>
using namespace std;
bool ispossible(int arr[], int mid, int n, int m)
{
    int sc = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum = pagesum + arr[i];
        }
        else
        {
            sc = sc + 1;
            if (sc > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = 0;
            pagesum += arr[i];
        }
    }
    return true;
}


int main()
{

    int arr[5] = {10, 20, 30, 40};
    int m;
    cin >> m;
    int s = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    int ans = -1;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, mid, 5, m))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    cout << ans;
    return 0;
}