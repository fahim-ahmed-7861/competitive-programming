#include<stdio.h>
int main()
{
    int i,n=2,m=4,p=6,s=8,g=10,q=12,w=14;

    for(i=0;i<=96;i=i+16) {
            printf("%d %d %d %d %d %d %d %d\n",i,n,m,p,s,g,q,w);

        n=n+16;
        m=m+16;
        p=p+16;
        s=s+16;
        g=g+16;
        q=q+16;
        w=w+16;

    }
    return 0;
}
