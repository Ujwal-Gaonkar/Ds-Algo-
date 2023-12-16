#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter n"<<endl;
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }

    cout<<"**********"<<endl;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}