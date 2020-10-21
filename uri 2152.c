#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);

        if(z==1)
        {
            if(x<10 && y>10)printf("0%d:%d - A porta abriu!\n",x,y);

            else if(y<10 && x>10)printf("%d:0%d - A porta abriu!\n",x,y);

            else if(y<10 && x<10)printf("0%d:0%d - A porta abriu!\n",x,y);

            else printf("%d:%d - A porta abriu!\n",x,y);
        }
        else
        {
             if(x<10 && y>10)printf("0%d:%d - A porta fechou!\n",x,y);

             else if(y<10 && x>10)printf("%d:0%d - A porta fechou!\n",x,y);

             else if(y<10 && x<10)printf("0%d:0%d - A porta fechou!\n",x,y);

             else printf("%d:%d - A porta fechou!\n",x,y);
        }
        return 0;
    }
}
