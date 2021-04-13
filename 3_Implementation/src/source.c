#include<stdio.h>
#include<math.h>

long int gratuity_calculation(long double P, int n, int m,int e){
    long int result=0;
    if(m>=5)n++;
    if(n<5){
        printf("\nTo be eligible for gratuity under the Gratuity Act,\n an employee needs to have at least five full years of service\n with the current employer, except in the event that an employee\n passes away or is rendered disabled due to accident or illness.\n In these cases, gratuity must be paid.\n");
    }
    if(e==1){
        result = P*(15/26)*n;
        return result;
    }
    else if(e==0){
        result = P*(15/30)*n;
        return result;
    }
    else printf("\nPlease try again");
}

long int fixed_deposit(long double P,int n, float r){
    long int result = P*(pow((1+r/100),n));
    return result;
}

long int roi(long double P,int n, float r){
    long int result = P*(pow((1+r/100),n))-P;
    return result;
}

long int emi(long double P,int n, float r){
    long int result = P*r*(1+r)*n/((1+r)*n-1);
    return result;
}