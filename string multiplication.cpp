
#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool status[10002];

vector<ll int>prime;

string multy(string a,ll b)
{
    reverse(a.begin(),a.end());
    int carry = 0 , len = a.size();
    for(int i=0;i<len;i++)
    {
        carry += (a[i]-'0')*b;
        a[i] = (carry%10)+'0';
        carry /= 10;
    }

    cout<<a<<" "<<carry<<endl;
    while(carry)
    {
        a += (carry%10)+'0';
        carry /= 10;
    }
    return a;
}


string _multy(string a,ll b)
{
    reverse(a.begin(),a.end());

    ll n=a.size(),carry=0;

    for(ll i=0; i<n; i++)
    {
        carry+=((a[i]-'0')*b);

        a[i]=(carry%10)+'0';

        carry/=10;
    }

    string aa;

    if(carry)aa=to_string(carry);

     reverse(a.begin(),a.end());

    a=aa+a;

    return a;
}
int main()
{

    ll b;

    string str;

    cin>>str>>b;

    str=multy(str,b);

   //
   // reverse(str.begin(),str.end());

    cout<<str<<endl;
}
