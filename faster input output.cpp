#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
#define gc getchar
#define pc putchar
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void Cin(ll &num) {
	num = 0;
	char ch = gc();
	ll flag = 0;

	while(!((ch >= '0' & ch <= '9') || ch == '-')) {
		ch = gc();
	}

	if(ch == '-') {
		flag = 1;
		ch= gc();
	}

	while(ch >= '0' && ch <= '9') {
		num = (num << 1) + (num << 3) + ch - '0';
		ch = gc();
	}

	if(flag == 1) {
		num = 0 - num;
	}
}

void Cout(ll n)
{

    ll num=n,rev=n,cnt=0;

    char ch;

    if(n==0)
    {

        pc('0');

        return ;
    }

    while(rev%10==0)
    {
        cnt++;

        rev/=10;
    }
    rev=0;

    while(num>0)
    {
        rev= (rev<<3) + (rev<<1) + num%10;

        num/=10;
    }

    while(rev>0)
    {
        ch=(rev%10)+'0';

        pc(ch);

        rev/=10;
    }

    while(cnt--)pc('0');


}

int main()
{
   fastread();


   ll n,i;

   Cin(n);

   ll ara[n+1];

   for(i=0; i<n; i++)Cin(ara[i]);

   for(i=0; i<n; i++)
   Cout(ara[i]),pc(' ');






}

