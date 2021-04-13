#include<stdio.h>
long double gratuity_calculation(long double P, int n, int m,int e){
    long double result=0;
    if(number_of_months>=5)n++;
    if(eligibility==1){
        result = P*(15/26)*n;
        return result;
    }
    else if(eligibility==0){
        result = P*(15/30)*n;
        return result;
    }
    else printf("\nPlease try again");
}

long double fixed_deposit(long double P,int n, float r){
    long double result = P*((1+r/100)*n);
    return result;
}

long double roi(long double P,int n, float r){
    long double result = P*((1+r/100)*n)-P;
    return result;
}

long double emi(long double P,int n, float r){
    long double result = P*r*(1+r)*n/((1+r)*n-1);
    return result;
}