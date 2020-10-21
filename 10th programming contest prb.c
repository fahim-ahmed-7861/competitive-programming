#include<stdio.h>
int main()
{
    int T;

    double current_rr,asking_rr,t_run,c_run,j,ball_played,b_left;
    scanf("%d",&T);

    while(T--)
    {

        scanf("%lf %lf %lf",&t_run,&c_run,&b_left);
        ball_played=300-b_left;
        current_rr=(c_run/ball_played)*6;

        asking_rr=((t_run+1-c_run)/b_left)*6;

        printf("%.2lf %0.2lf\n",current_rr,asking_rr);


    }
    return 0;
}
