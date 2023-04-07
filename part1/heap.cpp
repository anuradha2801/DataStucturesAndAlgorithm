#include <iostream>
using namespace std;
// creating a class heap having array and its size
class heap
{
public:
    int size;
    int arr[100];

    heap()
    {
        size = 0;
        arr[0] = -1;
    }

    // insertion in heap
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // printing heap
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // deletion in heap
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete";
        }

        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * 1 + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                 i=rightIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i=rightIndex;
            }
            else
            {
                return;
            }
        }
    }

   //

};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    cout << "after deletion" << endl;
    h.print();
    return 0;
}