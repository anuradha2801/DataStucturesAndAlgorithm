// heapify - O(log n)
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int leftIndex = 2 * i;
  int rightIndex = 2 * i + 1;

  if (leftIndex <= n && arr[largest] < arr[leftIndex])
  {
    largest = leftIndex;
  }
  if (rightIndex <= n && arr[largest] < arr[rightIndex])
  {
    largest = rightIndex;
  }
  if (largest != i)
  {
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest); // largest index ko sahi jagah pe pahuncha do
  }
}

// heap sort
void heapSort(int arr[], int n)
{
  int size = n;
  while (size > 1)
  {
    // step1-swap krdo
    swap(arr[size], arr[1]);
    size--;

    // step 2- correct position pe le jao;
    heapify(arr, size, 1);
  }
}

int main()
{

  int arr[6] = {-1, 54, 53, 55, 52, 50};
  int n = 5;

  // heap creation
  for (int i = n / 2; i > 0; i--)
  {
    heapify(arr, n, i);
  }

  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }

  // heapsort calling- O(nlogn)
  heapSort(arr, n);
  cout << "heap after heap sort" << endl;
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}