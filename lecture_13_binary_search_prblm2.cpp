//find the peak of mountain array
// arr[] = {0,1,0}
// arr[] = {0,2,1,0}
// arr[] = {3,4,5,1,0}

#include<iostream>
using namespace std;
int findPeakofMountain(int arr[],int n)
{
    int s= 0,e = n-1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e =  mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[] = {0,3,11,6,5,1,0};

    cout<<" The peak element is : "<<arr[findPeakofMountain(arr,7)]<<endl;
    return 0;
}