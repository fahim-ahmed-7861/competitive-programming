#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;

//typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> orderedSet;


#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define F first
#define S second

const int Max = 1e5 ;

ll mp[Max+10];
int main()
{

    fastread();

    ll i,j,n,m,p,sum=0,k,t,a,b,c,d,cnt=0,q;

    cin>>t;

    while(t--)
    {
        ll bh,ch,dh,lh,mh,gh,oh;

        memset(mp,0,sizeof(mp));

        bool hashi=false,ghja=false;

        cin>>n>>m;


        map<pair<ll,ll>,ll>kp;

        for(i=0; i<m; i++)
        {
            cin>>a>>b;

            if(b<a)
                swap(a,b);

            mp[a]++;

            mp[b]++;

            kp[ {a,b}]=1;
        }

        if(m & 1 )
        {

            // cout<<2<<endl;

            bool flag=false;
            ll ans=1,edge=1e9;
            for(i=1; i<=n; i++)
            {
                if((m-mp[i])%2==0)
                {
                    edge=mp[i];

                    ans=i;

                    flag=true;

                    break;
                }

            }

            if(flag)
            {

                cout<<2<<endl;

                for(i=1; i<=n; i++)
                {
                    if(ans==i)
                        cout<<2;

                    else
                        cout<<1;

                    if(i<n)
                        cout<<" ";
                }
            }
            else
            {

                pair<ll,ll> sx= {1,2};

                bool flag=false,gsum=false;

                for(i=1; i<=n; i++)
                {
                    for(j=i+1; j<=n; j++)
                    {
                        if(kp[ {i,j}])
                        {
                            mp[i]--;
                            mp[j];

                            if( (m-(mp[i]+mp[j]))%2==0)
                            {
                                sx= {i,j};

                                flag=true;

                                break;
                            }
                            mp[i]++;
                        }
                        else
                        {
                            if( (m-(mp[i]+mp[j]) %2)==0)
                            {
                                sx= {i,j};

                                gsum=true;

                                flag=true;

                                break;
                            }
                        }
                    }
                    if(flag)
                        break;
                }

                if(gsum)
                {
                    cout<<2<<endl;

                     for(i=1; i<=n; i++)
                    {
                        if(sx.first==i)
                            cout<<1;

                        else if(sx.S==i)
                            cout<<1;

                        else
                            cout<<2;

                        cout<<" ";
                    }
                }

                else
                {
                    cout<<3<<endl;

                    for(i=1; i<=n; i++)
                    {
                        if(sx.first==i)
                            cout<<1;

                        else if(sx.S==i)
                            cout<<2;

                        else
                            cout<<3;

                        cout<<" ";
                    }
                }

            }



            cout<<endl;
        }

        else
        {
            cout<<1<<endl;

            for(i=0; i<n; i++)
            {
                cout<<1;

                if(i<n)
                    cout<<" ";
            }

            cout<<endl;
        }




    }


  return 0;




}
