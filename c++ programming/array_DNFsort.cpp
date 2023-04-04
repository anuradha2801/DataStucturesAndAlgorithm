/*DNF-dutch national flage or 0,1,2 sort
check value of arr[mid]-
if 0,swap arr[low] and arr[mid], low++,mid++
if 1,mid++
if 2,swap arr[mid] and arr[high],high--*/
#include <bits/stdc++.h>
using namespace std;



void DNFsort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++, mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 1, 2, 0};

    DNFsort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
