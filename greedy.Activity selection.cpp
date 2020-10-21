#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    int activity;
    int start;
    int end;
}one;
int main()
{
    one std[100],temp;
    int i,n,j,c=1;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>std[i].activity>>std[i].start>>std[i].end;
    }

  cout<<endl<<endl;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(std[i].end>std[j].end)
            {
                temp=std[i];

                std[i]=std[j];

                std[j]=temp;
            }
        }
    }
    cout<<endl<<endl;
     for(i=0; i<n; i++)
    {
        cout<<std[i].activity<<" "<<std[i].start<<" "<<std[i].end<<endl;
    }
    int ara[n+5];
    int p=0;
     cout<<std[0].activity<<" "<<std[0].start<<" "<<std[0].end<<endl;

    for(i=1; i<n; i++)
    {
        if(std[p].end<=std[i].start)
        {
            c++;
            p=i;
         cout<<std[p].activity<<" "<<std[p].start<<" "<<std[p].end<<endl;
        }
    }
    cout<<endl<<c<<endl;

}
