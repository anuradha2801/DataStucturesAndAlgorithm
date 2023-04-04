/* given an umsorted array of A of size N of non negative integers, find a continious subarray which adds to a given number S.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, sum = 0, en = -1, st = -1;
    while (j < n && sum + a[j] <= sum)
    {
        sum += a[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j + 1;
        return 0;
    }
    while (j < n)
    {
        sum = sum + a[j];
        while (sum > s)
        {
            sum = sum - a[i];
            i++;
        }

        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}