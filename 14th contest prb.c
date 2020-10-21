#include<stdio.h>
#include<string.h>
int main()
{
    int T,count,i,s,p;
    char first_line[1001];
    char ch;
    scanf("%d",&T);

    while(T--)

       {
           count=0;

        scanf(" %[^\n] %c",first_line,&ch);

        p=ch;


        for(i=0; i<strlen(first_line); i++)
        {
             s=first_line[i];
            if(s==p)
            {
                count++;
            }
            else if(first_line[i]>'A' && first_line[i]<'Z'){

                        if(s+32==p)

                        count++;}

                   else if(first_line[i]>'a' && first_line[i]<'z'){

                    if(s-32==p) count++;}

        }
        if(count>0)
    printf("Occurrence of '%c' in '%s' = %d\n",ch,first_line,count);

        else
            printf("'%c' is not present\n",ch);
    }

    return 0;


}
