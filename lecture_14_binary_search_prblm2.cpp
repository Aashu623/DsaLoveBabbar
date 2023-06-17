// find the key in rotated array
// ex. arr[] = {7,9,1,2,3}

#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int value)
{
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
int findPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
bool findKey(int arr[], int n, int k)
{
    int pivot = findPivot(arr, n);
    if (k > arr[pivot])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    if (findKey(arr, 5, 8))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }
    return 0;
}