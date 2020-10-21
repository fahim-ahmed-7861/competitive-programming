#include<stdio.h>
#include<string.h>

#define Max 100005

int Final[Max];

int ara[Max][26],n,m,f;

int state[Max],pos=0;


void input()
{
    printf("How many state and how many value ? : ");
   scanf("%d %d",&n,&m);

   int i,j;



   for(i=0; i<n; i++)
   {
       for(j=0; j<m; j++)
       {
           scanf("%d",&ara[i][j]);
       }
   }
}


void finalstate_input()
{

    printf("How many Final state : ");
    scanf("%d",&f);

    printf("Input all the final state\n");

    int a,i;


    for(i=0; i<f; i++)
    {
        scanf("%d",&a);

        Final[a]=1;
    }
}

int DFA(char str[],int len)
{
    pos=0;

     int i=0,s=0;

     state[pos++]=0;


    while(i<len)
    {
        int next=str[i]-'a';

        s=ara[s][next];

        state[pos++]=s;

        i++;


    }

    if(Final[state[pos-1]])return 1;

    else return 0;


}
void state_print()
{
    printf("Visited state : ");
    int i;
      for(i=0; i<pos; i++)
       printf("%d ",state[i]);
    printf("\n");
}

void solution()
{

    char str[Max];

    int t;

    printf("How Many test string input? : ");

    scanf("%d",&t);

    printf("Now please input the string\n");

    while(t--)
    {
        printf("\n\n");

        scanf("%s",str);

        if(DFA(str,strlen(str))) printf("YES\n");

        else printf("NO\n");

         state_print();
    }
}
int main()
{

     input();

     finalstate_input();

     solution();




}


/*
4
2
1 0
1 2
1 3
1 0
1
3
3
ababb
aba
aaaabb
*/












