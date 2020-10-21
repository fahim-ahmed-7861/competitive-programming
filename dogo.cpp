#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                                   Fahim
//-------------------------------------------------------------------------------------------------------------------


int main()
{
//   fastread();

   ll i,j,n,m,k;

   string str;

   cin>>n>>str;

   map<char,int>mp;

   set<char>s;

   set<char>:: iterator it;

   for(i=0; i<n; i++)
    {
        mp[str[i]]+=1;

        s.insert(str[i]);
    }
    int cnt=0,bnt=0;

    for(it=s.begin(); it!=s.end(); it++)
    {
        if(mp[*it]>=2)
        {
            cnt++;
        }


    }

    if(cnt>=1 || n==1)cout<<"Yes";

    else cout<<"No";



}
