#include<iostream>
using namespace std;
int main()
{
    int m , n , mask = 0 ;
    cout<<"enter a number = ";
    cin>>n;
    m = n; 
    if(n == 0)
    {
       cout<<1;
       return 0;
    }
    while(m!=0)
    {
        mask = (mask <<1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask ;
    cout<<ans;
}