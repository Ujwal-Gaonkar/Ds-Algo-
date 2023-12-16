#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of object : ";
    cin>>n;
    int p[n+1];
    p[0]=0;
    cout<<"enter profit of all objects : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    cout<<"enter weights of all object : "<<endl;
    int wt[n+1];
    wt[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>wt[i];
    }
    cout<<"enter weight of knapsack bag : "<<endl;
    int m;
    cin>>m;
    int k[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=m;w++)
        {
            if(i==0||w==0)
                k[i][w]=0;
            else if(wt[i]<=w)
                k[i][w]=max(p[i]+k[i-1][w-wt[i]],k[i-1][w]);
            else
                k[i][w]=k[i-1][w];
        }
    }

    cout<<"table : "<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"max profit : "<<k[n][m]<<endl;

    int res[n];
    int it=n-1;
    int i=n,j=m;
    while(i>=0 && j>=0)
    {
        if(k[i][j]==k[i-1][j])
        {
            res[it--]=0;
            i--; 
        }
        else
        {
            res[it--]=1;
            j=j-wt[i];
            i--;
        }
    }

    cout<<"selected objects are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1 <<" - "<<res[i]<<endl;
    }
    cout<<endl;
}