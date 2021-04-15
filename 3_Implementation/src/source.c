#include<stdio.h>
#include<math.h>
long int result=0;
long int gratuity_calculation(long int P, long int n, long int m,long int e){
    if(m>=5){n=n+1;}
    if(n<5){
        printf("\nTo be eligible for gratuity under the Gratuity Act");
        printf("\n an employee needs to have at least five full years of service");
        printf("\n with the current employer, except in the event that an employee");
        printf("\n passes away or is rendered disabled due to accident or illness.");
        printf("\n In these cases, gratuity must be paid.\n");
    }

    if(e==1){
        result = P*((float)15/26)*n;
        return result;
    }
    else if(e==0){
        result =(P)*((float)15/30)*(n);
        return result;
    }
    //else {printf("\nPlease try again");return 0;}
}

long int fixed_deposit(long int P,long int n, float r){
    result = P*(pow((1+(float)r/100),n));
    return result;
}

long int roi(long int P,long int n, float r){
    result = P*(pow((1+(float)r/100),n))-P;
    return result;
}

long int emi(long int P,long int n, float r){
    //result = (float)((P*r*(1+r)*n)/((1+r)*n-1));
    //result= (float)(fixed_deposit(P,n,r))/(12*n);
    //result=P*(r/12)*((float)pow((1+r/12),n*12)/(pow((1+r/12),(n*12))-1));
    float R=0;
    R=r/1200;
    float N=0;
    N=n*12;
    long int res1=(long double)pow((1+R),N)/(pow((1+R),(N-1)));
    result=(P * R * res1);
    return result;
}
