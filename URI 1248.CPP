#include<bits/stdc++.h>
using namespace std;
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
             h=str.find(ctr[i]);

              if(h!=-1){

            str.erase(h,1);

             n--;

              }

              else goto xx;
        }

        for(i=0; i<ktr.size(); i++)
        {
             h=str.find(ktr[i]);


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
