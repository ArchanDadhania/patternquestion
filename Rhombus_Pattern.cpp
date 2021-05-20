#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)   //row
    {
        for(int j=1;j<=n-i;j++)  //col
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}