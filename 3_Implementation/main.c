#include "inc\header.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int financial_calculator_operation = 0;

/* Operands on which calculation is performed */
long double amount=0;
int number_of_years = 0;
int number_of_months=0;
float rate_of_interest=0;
int eligibility=0;
long double *pointer_to_amount=&amount;
float *pointer_to_rate_of_interest=&rate_of_interest;
int *pointer_to_number_of_years=&number_of_years;
int *pointer_to_number_of_months=&number_of_months;

/* Valid operations */
enum operations{ GRATUITY=1, FD, ROI, EMI, EXIT };

/* Display the menu of operations supported */
void financial_calculator_menu(void);

/* Verifies the requested operations validity */
int valid_operation(int operation);

/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Welcome to the Financial Calculator****\n");
    while(1)
    {
        financial_calculator_menu();
    }
}

void financial_calculator_menu(void)
{
    printf("\nSupported Financial Operations\n");
    printf("\n1. Gratuity Calculation for private sector employees"); 
    printf("\n2. Fix Deposit maturity amount Calculation");
    printf("\n3. Return on Investment on Mutual Funds");
    printf("\n4. EMI Calculation");
    printf("\n5. Exit");
    printf("\n\tEnter your choice\n");
   
    fpurge(stdin);
    scanf("%d", &financial_calculator_operation);

    if(EXIT == financial_calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
    if(INVALID != valid_operation(financial_calculator_operation))
    {
        switch(financial_calculator_operation)
        {
            case GRATUITY:
                printf("\nYou selected to calculate gratuity. Enter your last drawn salary");
                scanf("%Lf",&amount);
                printf("\nEnter your service duration in years and months separated by space");
                scanf("%d%d",&number_of_years,&number_of_months);
                printf("\nEnter 1 if your organization consists of more than 10 employees else enter 0");
                scanf("%d",&eligibility);
                printf("\nPress Enter to continue\n"); 
                printf("%Lf",gratuity_calculation(*pointer_to_amount,*pointer_to_number_of_years,*pointer_to_number_of_months,eligibility));
                fpurge(stdin);
                getchar();
                break;
            case FD:
                printf("\nYou selected to calculate maturity amount of Fixed deposit. Enter your principal amount");
                scanf("%Lf",&amount);
                printf("\nEnter tenur of Fixed Deposit");
                scanf("%d",&number_of_years);
                printf("Enter rate of interest for FD");
                scanf("%f",&rate_of_interest);
                printf("\nPress Enter to continue\n"); 
                printf("%Lf",fixed_deposit(*pointer_to_amount,*pointer_to_number_of_years,*pointer_to_rate_of_interest));
                fpurge(stdin);
                getchar();
                break;
            case ROI:
                printf("\nYou selected to calculate Return on investment for Mutual Funds. Enter your principal amount");
                scanf("%Lf",&amount);
                printf("\nEnter your service duration in years and months separated by space");
                scanf("%d",&number_of_years);
                printf("Enter rate of interest");
                scanf("%f",&rate_of_interest);
                printf("\nPress Enter to continue\n"); 
                printf("%Lf",roi(*pointer_to_amount,*pointer_to_number_of_years,*pointer_to_rate_of_interest));
                fpurge(stdin);
                getchar();
                break;
            case EMI:
                printf("\nYou selected to calculate EMI for a particular loan amount. Enter your loan amount");
                scanf("%Lf",&amount);
                printf("\nEnter your loan tenur in years");
                scanf("%d",&number_of_years);
                printf("\nPress Enter to continue\n"); 
                printf("Enter rate of interest");
                scanf("%f",&rate_of_interest);
                printf("%Lf",emi(*pointer_to_amount,*pointer_to_number_of_years,*pointer_to_rate_of_interest));
                fpurge(stdin);
                getchar();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\n\t---It should never come here---\n");
        }
    }
    else
    {
        printf("\n\t---Choice is not implemented yet---\nEnter to continue\n");
        fpurge(stdin);
        getchar();
        return;  
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((GRATUITY <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
