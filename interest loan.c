#include<stdio.h>
int main()
{

    double total_amount,interest_rate,number_of_years,loan_amount,monthly_amount;

    printf("Enter the loan amount= ");
    scanf("%lf",&loan_amount);
    printf("enter the interest rate= ");
    scanf("%lf",&interest_rate);
    printf("number of years= ");
    scanf("%lf",&number_of_years);

    total_amount=loan_amount+loan_amount*number_of_years*interest_rate/100;

    monthly_amount=total_amount/(number_of_years*12);

    printf("Total amount=%.2lf\nmonthly amount=%.2f\n",total_amount,monthly_amount);

    return 0;


}
