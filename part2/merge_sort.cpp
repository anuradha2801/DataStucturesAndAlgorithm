#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int n1 = mid - s + 1;
    int n2 = e - mid;
    // cpy from main array
    int *leftpart = new int[n1];
    int *rightpart = new int[n2];

    int mainIndex = s;
    for (int i = 0; i < n1; i++)
    {
        leftpart[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int j = 0; j < n2; j++)
    {
        rightpart[j] = arr[mainIndex++];
    }

    // merging two sorted subarrays

    int i = 0;
    int j = 0;
    mainIndex = s;

    while (i < n1 && j < n2)
    {
        if (leftpart[i] < rightpart[j])
        {
            arr[mainIndex++] = leftpart[i++];
        }
        else
        {
            arr[mainIndex++] = rightpart[j++];
        }
    }
    while (i < n1)
    {
        arr[mainIndex++] = leftpart[i++];
    }

    while (j < n2)
    {
        arr[mainIndex++] = rightpart[j++];
    }

    // delete memory for array
    delete[] leftpart;
    delete[] rightpart;
}

void mergesort(int *arr, int s, int e)
{

    int mid = s + (e - s) / 2;
    if (s >= e)
    {
        return;
    }
    // left vala part sort krlo;
    mergesort(arr, s, mid);
    // right vala part sort krlo
    mergesort(arr, mid + 1, e);

    // merge krlo
    merge(arr, s, e);
}

int main()
{

    int arr[10] = {9, 89, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}