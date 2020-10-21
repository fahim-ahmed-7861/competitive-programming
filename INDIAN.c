#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
  xx:while(t--)
    {

    char str[2000];
    int n,i,a=0,count=0;

    scanf("%d",&n);

    scanf(" %[^\n]",str);

    if(str[0]=='I')
    {
        printf("INDIAN\n");
        goto xx;
    }


    for(i=0; i<n; i++)
    {
        if(str[i]=='Y')
        {
            printf("NOT INDIAN\n");
            goto xx;
        }
    }

    for(i=0; i<n; i++)
    {
        if(str[i]=='N')count++;

        else if(str[i]=='I')a++;

    }

    if(a+count==n && a>0)
    {
        printf("INDIAN\n");
        goto xx;
    }
    printf("NOT SURE\n");


    }
    return 0;
}
