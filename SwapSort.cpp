#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,temp,i,j,c_min,minPos;

       scanf("%d",&n);

       vector<int>v(n,0);

       for(i=0; i<n; i++)scanf("%d",&v[i]);

      vector< pair<int,int> > swaps;

        for(i=0; i<n-1; i++)
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
                swaps.push_back(pair<int,int>(i,minPos));

                temp=v[i];
                v[i]=v[minPos];
                v[minPos]=temp;
            }
        }

        printf("%d\n",swaps.size());

        for(i=0; i<swaps.size(); i++)printf("%d %d\n",swaps[i].first,swaps[i].second);
        return 0;

}
