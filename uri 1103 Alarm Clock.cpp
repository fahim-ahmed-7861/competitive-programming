#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,sum;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0)break;
            if(m2>=m1)
            {
                if(h2>=h1)
                {
                    sum=h2-h1;
                }
                else
                {
                    sum=h2+24-h1;
                }

                sum=sum*60+(m2-m1);

                //printf("%d\n",sum);
            }
            else
            {
             //  if(h1==h2)sum=0;

                if(h2>h1)
                {
                    sum=h2-h1-1;
                }
                else
                {
                  //  sum=24-(h2+1)+h1;

                    sum=23+h2-h1;
                   // printf("%d\n",sum);
                }
                sum=sum*60+(m2+60-m1);

            }
            printf("%d\n",sum);

    }
}
