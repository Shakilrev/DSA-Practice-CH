#include<iostream>
using namespace std;

bool search(int arr[],int size ,int key)
{
    for(int i =0;i<=size;i++)
    {
        arr[i]==key;
    }
    return 1;
}
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"element to search = ";
    int key;
    cin>> key;
    bool found = search(arr,10,key);
    if(found)
    {
        cout<<"key is present"<<endl;
    }
    else
    {
        cout<<"key is not present"<<endl;
    }
    return 0;
}