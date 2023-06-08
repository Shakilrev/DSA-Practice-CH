#include<iostream>
using namespace std;
int main()
{
    unsigned int num;
    int count = 0 ;
cout<<"enter number = ";
cin>>num;

while(num!=0)
{
    if(num & 1)
    {
        count++;
    }
    num = num >>1;
}
cout<<count;
return 0;
}