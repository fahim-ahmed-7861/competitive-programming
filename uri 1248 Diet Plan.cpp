#include<bits/stdc++.h>
using namespace std;
int b_search(string ara,int n,char k)
{
    int low=0,high=n-1,location,mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(ara[mid]==k)
        {

            break;
        }
        if(k>ara[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    if(k==ara[mid])location=mid;

    else location=-1;

    return location;
}
int main()
{
    int t,h,i;

    scanf("%d",&t);
    cin.ignore();

    while(t--)
    {
        h=0;
        string str,ctr,ktr;

        getline(cin,str);
       getline(cin,ctr);
        getline(cin,ktr);

        int n=str.size(),c=ctr.size(),k=ktr.size();
        sort(str.begin(),str.end());

        for(i=0; i<ctr.size(); i++)
        {
             h=b_search(str,n,ctr[i]);

              if(h!=-1){

            str.erase(h,1);

             n--;

              }

              else goto xx;
        }

        for(i=0; i<ktr.size(); i++)
        {
             h=b_search(str,n,ktr[i]);


              if(h!=-1) {
                    str.erase(h,1);

                    n--;
              }

              else goto xx;
        }

         if(h!=-1)cout<<str<<endl;

         else xx: printf("CHEATER\n");

    }
    return 0;
}
