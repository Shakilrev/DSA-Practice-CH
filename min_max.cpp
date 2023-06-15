#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getMax(int num[], int s)
{
    int max = INT_MIN;
    for(int i = 0 ; i<s ; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[], int s)
{
    int min = INT_MAX;
    for(int i = 0 ; i<s ; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}
int main()
{
    int size ;
    cin>>size;

    int num[size];
    for(int i = 0 ; i<size ; i++)
    {
        cin>>num[i];
    }
    
    cout<<"maximum number is = "<<getMax(num,size)<<endl;
    cout<<"minimum number is = "<<getMin(num,size)<<endl;
    return 0;
}