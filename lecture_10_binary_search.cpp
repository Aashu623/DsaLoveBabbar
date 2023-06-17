#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int value)
{
    int start{0};
    int end{size - 1};

    int mid{start + (end - start) / 1};

    while (start <= end)
    {
        if (arr[mid] == value)
        {
            return mid;
        }
        // go to right part
        else if (value > arr[mid])
        {
            start = mid + 1;
        }
        // go to left part
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 1;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 12, 17, 23};
    int index1 = binarySearch(even, 6, 12);

    cout << " Index of 12 is: " << index1 << endl;
    int index2 = binarySearch(odd, 5, 17);

    cout << " Index of 17 is: " << index2 << endl;
    return 0;
}
