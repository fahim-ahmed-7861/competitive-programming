#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define eb emplace_back
#define vll(v) v.begin(),v.end()
const long long Mod =  998244353;
long long weight[30];

typedef struct
{
    ll first,second,freq;
}node;



map<string,node>RR;
ll BigMod(ll a,ll b,ll M)
{
    if(b==0)
        return 1;
    ll x = BigMod(a,b/2,M);
    x = (x*x)%M;
    if(b&1)
        x = (x*a)%M;
    return x;
}
void input_weight()
{
    for(int i=0; i<=25; i++)
        cin>>weight[i];
}


ll z_function(string str)
{
     int z[str.size()+10]={};
    int left , right;

    left = right = z[0] = 0;

    int n=str.size();



    ll sum=0;

    string cp;
    cp=str[0];

    for(int i=1;i<n;i++)
    {
        if(i <= right)
            z[i] = min(z[i-left],right-i+1);

        while(i+z[i] <n && str[i+z[i]] == str[z[i]])
            z[i]++;

        if(i+z[i]-1 > right)
            left = i , right = i+z[i]-1;

   // cp+=str[i];
       if(z[i]+i==n)
       {
           sum=(sum+RR[str.substr(0,i)].second)%Mod;
       }
     // cp=cp+str[i];



            //cout<<i<<" "<<z[i]<<endl;
    }

    return sum;
}
ll precall(string q)
{
    int l,r,sum=0;
    int n=q.size();
    //string p;

    ll ansp=0;

    ll cp=0;
    for(l=0; l<n; l++)
    {
        sum=0;
        string p;
        for(r=1; l+r<=n; r++)
        {
            p=q.substr(l,r);
          // p+=q[l+r-1];

            RR[p].freq++;
            sum=(sum+weight[q[l+r-1]-'a'])%Mod;


          if(RR[p].freq==1)
                {





            }
          // else

           else ansp=(ansp+(sum))%Mod;

        }
    }

   //ansp--;
  // n++;

 // if((n+cp)&1)ansp--;

    ll gm=0;

   // gm%=Mod;

    //ansp=(ansp+gm)%Mod;

    //if(ansp%2==0)ansp--;

    return (ansp-1)%Mod;
}




int main()
{


#ifdef  FahimAhmedShojib
    printf( "Hello!\n" );
#endif

  fastread();




    double bb1,bb2,bb3,bb4,bb5,bb6,bb7,bb8;
    string lm1,lm2,lm3,lm5,lm6;
    float ha;

  //  long long aaa[50];

    long long t,Ans=0;
    cin>>t;

    while(t--)
    {
        string ara;


        long long LCP;

        RR.clear();

        cin>>ara;
        input_weight();
        long long ncr2=((ara.size()*(ara.size()+1))/2)%Mod;

        LCP=precall(ara);

        cout<<LCP<<endl;

        Ans=(BigMod(ncr2,Mod-2,Mod)*LCP)%Mod;

        cout<<Ans<<endl;
    }

    return 0;



}

/*

4
abcdabcd
2 3 4 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
aaa
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
abab
1 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
abcdabcdab
2 3 4 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

*/
