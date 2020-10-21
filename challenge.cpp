#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

deque<pair<ll,ll> >v;

ll bsearch(vector<ll>arr, deque<ll>&T, ll l, ll r,ll key)
{
    while (r - l > 1)
    {
        long long mid= l + (r - l) / 2;
        if (arr[T[mid]] >= key)
            r = mid;
        else
            l = mid;
    }
    return r;
}

ll Lis(vector<ll>arr, ll n)
{
    deque<ll> tail(n, 0);
    deque<ll> prev(n, -1);
    ll cnt = 1;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] < arr[tail[0]])
        {
            tail[0] = i;
        }
        else if (arr[i] > arr[tail[cnt - 1]])
        {
            prev[i] = tail[cnt - 1];
            tail[cnt++] = i;
        }
        else
        {
            ll pos = bsearch(arr, tail, -1,cnt - 1, arr[i]);
            prev[i] = tail[pos - 1];
            tail[pos] = i;
        }
    }
    for (ll i = tail[cnt - 1]; i >= 0; i = prev[i])
    {
        v.push_front({arr[i],i});
    }


    return cnt;
}

void solution(vector<ll>arr,ll n,ll k)
{
     long long i,j,minn=1e16,mxx=-1,ax,bx;

    minn=*min_element(arr.begin(),arr.end());

    mxx=*max_element(arr.begin(),arr.end());



    if(k<n)
    {
        ll cnt=Lis(arr,n);

        if(mxx!=v[cnt-1].first)
        {
            for(i=0; i<n; i++)
            {
                if(mxx!=arr[i])
                    cout<<arr[i]<<" ";
            }
            cout<<mxx<<endl;
        }

        else
        {

            if(minn!=v[0].first)
            {
                cout<<minn<<" ";
                for(i=0; i<n; i++)
                {
                    if(minn!=arr[i])
                        cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            else if(k==3)
            {
                if(arr[0]==minn && arr[n-1]==mxx)
                {
                    for(i=0; i<n; i++)
                        cout<<arr[i]<<" ";
                    cout<<endl;
                }

                else
                {
                    if(arr[0]!=minn)
                    {
                        j=0;
                        bool flag=false;
                        for(i=1; i<n; i++)
                        {

                            if(flag)
                                cout<<arr[i]<<" ";
                            else if( (v[j].first==arr[i] && v[j].first<arr[0]))
                            {
                                j++;
                                cout<<arr[i]<<" ";
                            }
                            else
                            {
                                cout<<arr[0]<<" "<<arr[i]<<" ";
                                flag=true;
                            }
                        }
                        cout<<endl;
                    }
                    else
                    {
                        j=0;
                        bool flag=false;
                        for(i=0; i<n-1; i++)
                        {

                            if(flag)
                                cout<<arr[i]<<" ";
                            else if( (v[j].first==arr[i] && v[j].first<arr[n-1]))
                            {
                                j++;
                                cout<<arr[i]<<" ";
                            }
                            else
                            {
                                cout<<arr[n-1]<<" "<<arr[i]<<" ";
                                flag=true;
                            }
                        }
                        cout<<endl;
                    }
                }

            }
            else
            {
                ll j=1;
                for(i=0; i<cnt; i++)
                {
                    if(v[i].first!=j)
                    {
                        break;
                    }
                    else
                        j++;
                }
                ll ans=j;
                j=0;
                bool flag=false;
                for(i=0; i<n; i++)
                {
                    if(flag)
                        cout<<arr[i]<<" ";
                    else if( (v[j].first==arr[i] && v[j].first<ans))
                    {
                        j++;
                        cout<<arr[i]<<" ";
                    }
                    else if(ans!=arr[i])
                    {
                        cout<<ans<<" "<<arr[i]<<" ";
                        flag=true;
                    }
                }
                cout<<endl;
            }
        }

    }

    else if(k==n)
    {
        sort(arr.begin(),arr.end());
        for(i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    long long  k,n ;

    cin>>n>>k;

    vector<ll>arr(n);

     for(ll i=0; i<n; i++)
    {
        cin>>arr[i];

    }
   solution(arr,n,k);


    return 0;
}
