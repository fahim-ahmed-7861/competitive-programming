#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define pb push_back
#define pp pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------

ull hash1,hash2,base=997;
ull  M=1e9+7;
ull cnt=0;

ull hash_value(string str,ull sz)
{
    ull sum=0;

    for(ll i=0; i<sz; i++)
    {
        sum=sum+(str[i]*pow(base,i));

        //  cout<<sum<<endl;
    }


    return sum;
}

ull pattern_match(string str,ull n,string ptr,ull m)
{
    if(hash1==hash2)
         cnt++;

    //cout<<1<<endl;
    for(ull i=m,j=0; i<n; i++,j++)
    {

        hash1-=(str[j]*pow(base,0));

       // hash1+=M;

       // hash1%=M;

       hash1=ceil(hash1/base);

       cout<<hash1<<endl;

        hash1+=(str[i]*pow(base,m-1));

         cout<<hash1<<" "<<hash2<<endl;

        if(hash1==hash2)
             cnt++;
    }

    return cnt;
}

int main()
{
    fastread();

    ull n,m,q,k=1,pos;

    cin>>q;

    while(q--)
    {
        cnt=0,pos=0;

        string str,ptr;

          cin>>str>>ptr;


        n=str.size();
        m=ptr.size();

       if(m>n)
       {
            cout<<"Case "<<k++<<": ";
        cout<<pos<<endl;
       }

       else{
        hash1=hash_value(str,m);

        hash2=hash_value(ptr,m);

        cout<<hash1<<" "<<hash2<<endl;

        pos=pattern_match(str,n,ptr,m);

        cout<<"Case "<<k++<<": ";
        cout<<pos<<endl;
       }
    }


}
