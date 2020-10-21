#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch[100],s[100];

    scanf("%s %s %s",str,ch,s);

    if(strcmp("vertebrado",str)==0)
    {
         if(strcmp("ave",ch)==0)
         {
             if(strcmp("carnivoro",s)==0)
             {
                 printf("aguia\n");
             }
             else
             {
                 printf("pomba\n");
             }
         }
         else
         {
              if(strcmp("onivoro",s)==0)
              {
                  printf("homem\n");
              }
              else
              {
                  printf("vaca\n");
              }
         }
    }
    else if(strcmp("invertebrado",str)==0)
    {
        if(strcmp("inseto",ch)==0)
        {
            if(strcmp("hematofago",s)==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
             if(strcmp("hematofago",s)==0)
             {
                 printf("sanguessuga\n");
             }
             else
             {
                 printf("minhoca\n");
             }
        }
    }
    return 0;

}
