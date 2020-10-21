#include<stdio.h>
int main()
{
    int T,i;
    char str[1000],str1[1000],str2[1000];
    scanf("%d",&T);
    while(T--)
    {

        scanf(" %[^\n]",str);

        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
              )
            {
                printf("%c",str[i]);
            }
        }
            printf("\n");
            for(i=0; i<strlen(str); i++)
            {
                if(str[i]!='a' && str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'
                        && str[i]!=' ')
                {

                    printf("%c",str[i]);
                }
            }
            printf("\n");

        }

}
