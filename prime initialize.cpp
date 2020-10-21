#include<bits/stdc++.h>
using namespace std;
#define N 100000010

#define m 10010

bitset<N>prime;
void  prime_initialize(){

    int i,j;
    prime[1]=1;

	for(i=4; i<N; i+=2)
        prime[i]=1;

    for(i=3; i<m; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i; j<N; j+=i*2)
                prime[j]=1;
        }
    }
}
int main()
{
    prime_initialize();
    for(int i=1; i<1000; i++)
    {
        if(prime[i]==0)
            cout<<i<<endl;
    }
}
