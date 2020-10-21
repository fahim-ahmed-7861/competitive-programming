#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,n,k,p,sume=0,a=-1,c=-1;

    char str[10000],ch[101],ex[12];
    double sum, ara[1000];
    scanf(" %[^\n]",str);

    n=strlen(str);

    for(i=0; i<n; i++)
    {
        if(isdigit(str[i])==1)
        {
            j=i;
        for(i=j,k=0; i<n; k++,i++)
        {
             if(isdigit(str[i])==1)ch[k]=str[i]-'0';

             else break;
        }
        sum=0.0;
        for(k=k-1,p=0; k>-1;p++, k--)
        {
            sum+=ch[k]*pow(10,p);
        }
       // printf("%lf\n",sum);
        ara[++c]=sum;
         i--;
        }

        else if((isdigit(str[i])!=1) && str[i]!=' '){

            ex[++a]=str[i];
        }
    }
    ex[++a]='\0';
    k=-1;
    for(i=0; i<=a; i++)

    {
        if(ex[i]=='+')
        {
            sume+=ara[++k]+ara[++k];
            ara[++k]=sume;
           // k++;
            printf("%d\n",sume);
            //k--;
        }
        else if(ex[i]=='-')
        {
            sume+=ara[++k]-ara[++k];
            ara[k]=sume;
           // k++;

        }
        //printf("%lf ",ara[i]);
    }

    printf("%d",sume);
    //printf("\n%d",sume);


}
