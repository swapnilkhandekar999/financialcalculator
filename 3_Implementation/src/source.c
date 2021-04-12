#include<stdio.h>
long double gratuity_calculation(long double amount, int number_of_years, int number_of_months,int eligibility){
    if(number_of_months>=5)number_of_years++;
    if(eligibility==1)return amount * (15/26) * number_of_years;
    else if(eligibility==0)return amount * (15/30) * number_of_years;
    else printf("\nPlease try again");
}

long double fixed_deposit(long double amount,int number_of_years, float rate_of_interest){


}

long double roi(long double amount,int number_of_years, float rate_of_interest){


}

long double emi(long double amount,int number_of_years, float rate_of_interest){


}