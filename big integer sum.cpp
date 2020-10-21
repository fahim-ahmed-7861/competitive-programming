#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

string add(string str, string ctr)
{

    if(str.size()==0)
        str="0";

    if(ctr.size()==0)
        ctr="0";
    ll n=str.size(),m=ctr.size(),i,j,sum,a,b,carry=0;

    if(n<m)
    {
        swap(str,ctr);
        swap(n,m);
    }

    for(i=n-1,j=m-1; i>=0 && j>=0; i--,j--)
    {
        a=str[i]-'0';
        b=ctr[j]-'0';

        sum=a+b;

        if(carry==1)
        {
            sum++;
            carry=0;
        }

        if(sum<10)
        {
            str[i]=sum+'0';
            carry =0;
        }

        else
        {
            carry=1;

            sum=sum%10;

            str[i]=sum+'0';
        }

    }

    if(j==-1 && i>=0)
    {
        while(i>=0)
        {
            a=str[i]-'0';
            sum=a;
            if(carry==1)
            {
                sum++;
                carry=0;
            }

            if(sum<10)
            {
                str[i]=sum+'0';
                carry =0;
            }

            else
            {
                carry=1;

                sum=sum%10;

                str[i]=sum+'0';
            }
            i--;
        }

    }

    if(carry)
        str=char(carry+'0')+str;

   return str;

}
int main()
{
    fastread();

    int a,b,j,i,n,m,carry=0;

    string str,ctr;

    cin>>str>>ctr;

    string sum=add(str,ctr);

    cout<<sum<<endl;

}

