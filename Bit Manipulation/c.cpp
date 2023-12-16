#include<bits/stdc++.h>
using namespace std;
vector<int> countBits(int n)
{
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        int count = 0;
        while (i != 0)
        {
            count++;
            i = i & (i - 1);
        }
        v.push_back(count);
    }

    return v;
}

int main()
{
int n=2;
countBits(n);
    return 0;
}