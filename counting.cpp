 #include<iostream>
using namespace std;

void printcounting(int n)
{
    int count=0;
    for(int i=1; i<=n ;i++)
    {
        cout<<i<<" ";
        count++;
    }
    cout<<" count = "<<count;

}

int main()
{
    int n;
    cin>>n;
    printcounting(n);
}