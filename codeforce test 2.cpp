#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,l,a,sum,k;

    scanf("%d %d %d",&l,&r,&a);

        if(r<l)
        {
            if(r+a<=l)
            {
                sum=(r+a)*2;
            }
            else
            {
                sum=l*2;
                a=a-(l-r);
                sum+=(a/2)*2;
            }

        }
        else
        {
            if(l+a<=r)
            {
                sum=(l+a)*2;
            }
            else
            {
                sum=r*2;

                a=a-(r-a);

                sum+=(a/2)*2;
            }
        }
        printf("%d\n",sum);

}
