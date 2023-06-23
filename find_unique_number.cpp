#include<iostream>
using namespace std;
void checkunique(int arr[],int size)
{
    int ans = 0;
    for(int i =0 ; i<size ; i++)
    {
        ans = ans^arr[i];
    }
    cout<<ans<<" is unique";
}
int main()
{
    int array[8]={2,3,4,5,2,3,4} ;
    checkunique(array,8);
}