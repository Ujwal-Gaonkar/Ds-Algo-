#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    unordered_map<int,int> m;
    m[3]=1;
    s.insert(10);
    s.insert(15);
    s.insert(30);
    s.insert(15);
    s.insert(2);
    s.insert(1);
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<" ";
    cout<<endl;
    cout<<"size : "<<s.size()<<endl;
    s.erase(2);
    if(s.find(2)==s.end())
        cout<<"element not found"<<endl;
    else
        cout<<"found"<<endl;
    if(s.count(1)==0)
        cout<<"not present"<<endl;
    else
        cout<<"present"<<endl;
        s.clear();
        cout << "size : " << s.size() << endl;
}
// insert(); - insert new element to the set if already present override the element
// erase(); - delete the element and also delete elemets 1 range to another
// begin(); - returns the begining iterator
// end(); - returns ending iterator
// s.find()- returns the element iterator
// s.count() - returns 1 if element is present else 0
// s.clear()- deletes all the element
// s.size()- returns the size of the set