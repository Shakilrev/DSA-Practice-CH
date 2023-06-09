#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num , ans = 1;
    cout<<"enter a number = ";
    cin>>num;

    for(int i =0 ; i<=30 ; i++)
    {
        if(ans == num)
        {
            cout<<"number is in power of 2";
            return 0;
        }
        if(ans <INT_MAX/2)
        {
            ans = ans*2;
        }
    }
    cout<<"not in power of 2";
}