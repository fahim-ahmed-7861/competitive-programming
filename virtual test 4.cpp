#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin>>n;

    char ara[n+1][n+1];

    int kra[40],p;

    int i,j,k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>ara[i][j];
        }
    }

    bool c=true;

    for(i=0; i<n; i++)
    {
        fill(kra,kra+40,0);

        for(j=0; j<n; j++)
        {
            if(isdigit(ara[i][j]))
            {
                p=ara[i][j]-'0';
                if(kra[p]==0)
                {
                    kra[p]=1;
                }
                else
                {
                    c=false;
                    break;
                }
            }
            else
            {
                p=ara[i][j]-55;

                if(kra[p]==0)
                {
                    kra[p]=1;
                }
                else
                {
                    c=false;
                    break;
                }
            }
        }
        if(c==false)
            break;

    }
    if(c)
    {
        for(i=0; i<n; i++)
        {
            fill(kra,kra+40,0);
            for(j=0; j<n; j++)
            {
                if(isdigit(ara[j][i]))
                {
                    p=ara[j][i]-'0';
                    if(kra[p]==0)
                    {
                        kra[p]=1;
                    }
                    else
                    {
                        c=false;
                        break;
                    }
                }
                else
                {
                    p=ara[j][i]-55;

                    if(kra[p]==0)
                    {
                        kra[p]=1;
                    }
                    else
                    {
                        c=false;
                        break;
                    }
                }
            }
            if(c==false)
                break;

        }
    }


    if(c==false)
        printf("No\n");

    else
    {
        for(j=1; j<n; j++)
        {
            k=ara[0][j]-ara[0][j-1];

            if(k<=0)
            {
                c=false;
                break;
            }
        }

        if(c)
        {
            for(j=1; j<n; j++)
            {
                k=ara[j][0]-ara[j-1][0];

                if(k<=0)
                {
                    c=false;
                    break;
                }
            }
        }
        if(c)
            printf("Reduced\n");

        else
            printf("Not Reduced\n");
    }
    return 0;
}
