#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0 ;
    int end = n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++ ;
        end--;
    }
}
void printArray(int arr[] , int n )
{
    for(int i = 0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int n=6;
    for(int i = 0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr,6);
    printArray(arr,6);
    return 0;
}