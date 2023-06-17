// find pivot in an array
// ex. arr[] = {1,2,3,7,9}

#include <iostream>
using namespace std;
int findPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}
int main()
{
    int arr[] = {3,8,10,17,1,6};

    cout << "The pivot element of the array : " << arr[findPivot(arr, 5)] << endl;
    return 0;
}