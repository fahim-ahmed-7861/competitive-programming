#include<bits/stdc++.h>
using namespace std;
void print_map( map<char,int>s)
{
     map<char,int>::iterator it;

    for(it=s.begin(); it!=s.end(); it++)
    {
    cout <<it->first << " ";
    }
}
int main()
{
    map<char,int>m;

    int n,i,p;
    char ch;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>ch;
        m[ch]=1;
        m[ch];
    }
    int t;
    cin>>t;

    while(t--)
    {
        cin>>ch;

        if(m[ch]==1)cout<<"found"<<endl;

        else cout<<"not found"<<endl;
    }
    map<char,int>::iterator it;

//    it=m.find(2);

//    m.erase(it);


   print_map(m);
}
