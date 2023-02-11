#include<iostream>
using namespace std;

// Sort array of 0's and 1's
void sort(int arr[],int size){
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<high){
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[]={1,0,1,0,1,0};
    int size=6;
    sort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}