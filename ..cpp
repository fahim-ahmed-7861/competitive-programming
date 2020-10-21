#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,temp,i,j,k,c_min,minPos;

       scanf("%d",&n);

       vector<int>v(n,0);

       for(i=0; i<n; i++)scanf("%d",&v[i]);

        map<int,int>  swaps;

        for(i=0,k=0; i<n-1; i++)
        {
            minPos=i;
            c_min=v[i];
            for(j=i+1; j<n; j++)
            {
                if(v[j]<c_min)
                {
                    c_min=v[j];
                    minPos=j;
                }
            }
            if(minPos>i)
            {

                swaps[i]=minPos;


            temp=v[i];
                v[i]=v[minPos];
                v[minPos]=temp;
            }
        }

        printf("%d\n",swaps.size());

        map<int,int>::iterator it;

        for(it=swaps.begin(); it!=swaps.end(); it++)
      {
      cout <<it->first << " "<<it->second<<endl;
      }
        return 0;

}
