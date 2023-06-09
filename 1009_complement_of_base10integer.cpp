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
        return 1;
    }
    while(m!=0)
    {
        mask = (mask <<1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask ;
    cout<<ans;
}