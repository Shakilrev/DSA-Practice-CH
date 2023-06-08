#include<iostream>
using namespace std;
int main()
{
    int n ,last ,sum= 0 ;
    cout<<"Enter a number = ";
    cin>>n;

    while(n>0)
    {
        last = n%10;
        sum = sum + last ;
        n = n/10;

    }
    cout<<"Sum of digits = "<<sum;
}