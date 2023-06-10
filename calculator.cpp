#include<iostream>
using namespace std;
int main()
{
    int a , b ;
    char op;
    cout<<"value of a = ";
    cin>>a;
    cout<<"value of b = ";
    cin>>b;
    cout<<"operation = ";
    cin>>op;

    switch(op)
    {
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
        case '%': cout<<a%b<<endl;
        break;
        default : cout<<"invalid input";

    }



}