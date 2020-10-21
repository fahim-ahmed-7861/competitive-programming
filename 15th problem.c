#include<stdio.h>
int main()
{
    int i,count[26]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116
    ,117,118,119,120,121,122};



    char s[1000];
    scanf(" %[^\n]",s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>'a' && s[i]<'z')
        {
            count[s[i]-'a']++;
        }
    }
    //count[0];

    for(i=0 ; i<26;i++)
    {
        if(count[i]!=0)
        {
        printf("%c = %d\n",'a'+i,count[i]);
        }
    }

}
