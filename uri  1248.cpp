#include<bits/stdc++.h>
using namespace std;
char item;
int m;
void binary(int low,int high,char diet[])
{
     int mid;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(diet[mid]==item )
        {
          diet[mid]='0';
          return;
        }

        if(item>diet[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    //cout<<1<<endl;
}
int main()
{
    int t,i,n;
    char cp;
    char diet[27],cafe[27],almoco[27];
    cin>>t>>cp;
    while(t--)
    {

      cin.getline(cafe,27);
         cout<<cafe<<endl;
       // cin.getline(cafe,27);
        cin.getline(almoco,27);
        n=strlen(cafe);
        m=strlen(diet);
        sort(diet,diet+m);
        cout<<diet<<endl;

       /* for(i=0; cafe[i]!='\0'; i++)
        {
             item=cafe[i];
             binary(0,m-1,diet);
            // cout<<i<<endl;
        }
        for(i=0; almoco[i]!='\0'; i++)
        {
             item=almoco[i];
             binary(0,m-1,diet);
            // cout<<i<<endl;
        }
        cout<<diet[0];
        for(i=0; diet[i]!='\0' ; i++)
        {
            if(diet[i]!='0')
            cout<<diet[i];

            else continue;
        }*/

    }
}
