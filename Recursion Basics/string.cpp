#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int n,int i)
{
   if(i>=n/2)   return true;
   if(s[i] == s[n - i - 1])    return isPalindrome(s, n, i + 1);
   return false;
}



int main()
{
    string s = "mad";
    cout << isPalindrome(s, s.length(), 0) << endl;
    return 0;
}