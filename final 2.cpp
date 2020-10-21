#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int>pii;

#define F first
#define S second

#define pb push_back
int mi=1e8,mx=0;


vector<pii>vec,vss,gss;

void in(int ara[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];

        mi=min(mi,ara[i]);

        mx=max(mx,ara[i]);
    }
}
void okprint(int ara[],int n)
{
     for(int i=0; i<n; i++)
                    cout<<ara[i]<<" ";

                cout<<endl;
}

int Get(int arr[], vector<int>&Temp, int l, int r,int key)
{
    while (r - l > 1)
    {
        int m = l + (r - l) / 2;
        if (arr[Temp[m]] >= key)
            r = m;
        else
            l = m;
    }

    return r;
}

int LIS(int arr[], int n)
{

    vector<int> t(n, 0);
    vector<int> p(n, -1);
    vector<int>gs(n,0);

    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[t[0]])
            t[0] = i;

        else if (arr[i] > arr[t[len - 1]])
        {

            p[i] = t[len - 1];
            t[len++] = i;
        }
        else
        {

            int pos = Get(arr, t, -1,len - 1, arr[i]);

            p[i] = t[pos - 1];
            t[pos] = i;
        }
    }


    for (int i = t[len - 1]; i >= 0; i = p[i])
        vec.pb({arr[i],i});


    reverse(vec.begin(),vec.end());



    return len;
}

int check(int knt)
{
     int j=1;

            for(int i=0; i<knt; i++)
            {
                if(vec[i].F!=j)
                {
                   return j;
                }
                else
                    j++;
            }
}


int main()
{
    (ios_base:: sync_with_stdio(false),cin.tie(NULL));

    int i,j,n,m,p,sum=0,q;

    string str,btr,ctr,gtr,ktrr,sstr,lmsr,pb,ttr,aaa;

    bool flag=true,ff=false,kal=false;

    cin>>n>>m;

    int ara[n+1];

    in(ara,n);

    if(n==m)
    {
       for(i=1; i<=n; i++)
        cout<<ara[i]<<" ";
       cout<<endl;
    }

    else
    {
        int knt=LIS(ara,n);

        if(mi!=vec[0].F)
        {
            cout<<mi<<" ";
            for(i=0; i<n; i++)
            {
                if(mi!=ara[i])
                    cout<<ara[i]<<" ";
            }

            cout<<endl;
        }
        else if(mx!=vec[knt-1].F)
        {

            for(i=0; i<n; i++)
            {
                if(mx!=ara[i])
                    cout<<ara[i]<<" ";
            }

            cout<<mx<<endl;


        }

        else if(m>3)
        {



            int ans=check(knt);



            j=0;

            bool flag=false;

            for(i=0; i<n; i++)
            {

                if(flag)
                    cout<<ara[i]<<" ";

                else if( (vec[j].F==ara[i] && vec[j].F<ans))
                {
                    j++;

                    cout<<ara[i]<<" ";
                }

                else if(ans!=ara[i])
                {
                    cout<<ans<<" "<<ara[i]<<" ";

                    flag=true;
                }
            }

            cout<<endl;


        }
        else
        {


            if(ara[0]!=mi || ara[n-1]!=mx)
            {
                if(ara[0]!=mi)
                {

                    j=0;

                    bool flag=false;

                    for(i=1; i<n; i++)
                    {

                        if(flag)
                            cout<<ara[i]<<" ";

                        else if( (vec[j].F==ara[i] && vec[j].F<ara[0]))
                        {
                            j++;

                            cout<<ara[i]<<" ";
                        }

                        else
                        {
                            cout<<ara[0]<<" "<<ara[i]<<" ";

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
                            cout<<ara[i]<<" ";


                        else if( (vec[j].F==ara[i] && vec[j].F<ara[n-1]))
                        {
                            j++;

                            cout<<ara[i]<<" ";
                        }

                        else
                        {
                            cout<<ara[n-1]<<" "<<ara[i]<<" ";

                            flag=true;
                        }
                    }

                    cout<<endl;
                }
            }
            else okprint(ara,n);
            }}

    return 0;

}


