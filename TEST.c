#include<stdio.h>
#include<string.h>
int main()
{
    int t,h=1;
    scanf("%d",&t);
    while(t--)
    {
        char str[1500];

        int n,i,count=0;

        scanf("%d",&n);

        scanf(" %[^\n]",str);

        if(str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o' || str[0]=='u')count++;

        for(i=1; i<n; i++)
        {
            if(str[i-1]=='a' || str[i-1]=='e' || str[i-1]=='i' || str[i-1]=='o' || str[i-1]=='u')

                continue;


            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')count++;


        }
        printf("Case %d: %d\n",h,count);
        h++;
    }
    return 0;
}
