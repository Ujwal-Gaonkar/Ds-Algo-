#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int knapsack(int wt[],int p[],int w,int n)
{
    if(n==0 ||w==0) return 0;
    if(dp[n][w]!=-1)    return dp[n][w];
    if(wt[n-1]<=w)
        return dp[n][w]=max(p[n-1]+knapsack(wt,p,w-wt[n-1],n-1),knapsack(wt,p,w,n-1));
    else if(wt[n-1]>w)
        return dp[n][w]=knapsack(wt,p,w,n-1);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cout<<"enter number of object : ";
    cin>>n;
    int p[n+1];
    for(int i=0;i<n;i++)
        cin>>p[i];
    int wt[n+1];
    for(int i=0;i<n;i++)
        cin>>wt[i];
    cout<<"knapsack bag size : ";
    int w;
    cin>>w;
    cout<<knapsack(wt,p,w,n);
}