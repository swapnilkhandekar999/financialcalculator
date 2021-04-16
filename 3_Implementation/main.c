#include "header.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int financial_calculator_operation = 0;

/* Operands on which calculation is performed */
long int amount=0;
long int number_of_years = 0;
long int number_of_months=0;
float rate_of_interest=0;
long int eligibility=0;

/* Valid operations */
enum operations{ GRATUITY=1, FD, ROI, EMI, EXIT };

/* Display the menu of operations supported */
void financial_calculator_menu(void);

/* Verifies the requested operations validity */
int valid_operation(int operation);

/* Start of the application */
int main()
{   
    printf("\n****Welcome to the Financial Calculator****\n");
    while(1)
    {
        financial_calculator_menu();
    }
}

/**
* @brief displays starting menu to select intended operation
 * 
 * @param[in] financial_calculator_operation variable selecting opearation
 * @return 0
 */
void financial_calculator_menu(void)
{   
    printf("\nSupported Financial Operations\n");
    printf("\n1. Gratuity Calculation for private sector employees"); 
    printf("\n2. Fix Deposit maturity amount Calculation");
    printf("\n3. Return on Investment on Mutual Funds");
    printf("\n4. EMI Calculation");
    printf("\n5. Exit");
    printf("\n\tEnter your choice\n");
    scanf("%u", &financial_calculator_operation);

    if(EXIT == financial_calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
    if(INVALID != valid_operation(financial_calculator_operation))
    {   
        long int result=0;
        switch(financial_calculator_operation)
        {
            case GRATUITY:
                printf("\nYou selected to calculate gratuity. Enter your last drawn salary\n");
                scanf("%ld",&amount);
                printf("\nEnter your service duration in years and months separated by space\n");
                scanf("%ld",&number_of_years);
                scanf("%ld",&number_of_months);
                printf("\nEnter 1 if your organization consists of more than 10 employees else enter 0\n");
                scanf("%ld",&eligibility);
                result=gratuity_calculation(amount,number_of_years,number_of_months,eligibility); 
                printf("\nGratuity amount is %ld\n",result);
                printf("\nPress Enter to continue\n");
                getchar();
                break;
            case FD:
                printf("\nYou selected to calculate maturity amount of Fixed deposit. Enter your principal amount\n");
                scanf("%ld",&amount);
                printf("\nEnter tenur of Fixed Deposit\n");
                scanf("%ld",&number_of_years);
                printf("\nEnter rate of interest for FD\n");
                scanf("%f",&rate_of_interest);
                result=fixed_deposit(amount,number_of_years,rate_of_interest);
                printf("\nMaturity amount is %ld\n",result);
                printf("\nPress Enter to continue\n");
                getchar();
                break;
            case ROI:
                printf("\nYou selected to calculate Return on investment for Mutual Funds. Enter your principal amount\n");
                scanf("%ld",&amount);
                printf("\nEnter tenur in years\n");
                scanf("%ld",&number_of_years);
                printf("\nEnter rate of interest\n");
                scanf("%f",&rate_of_interest);
                result=roi(amount,number_of_years,rate_of_interest);
                printf("\nROI is %ld\n",result);
                printf("\nPress Enter to continue\n"); 
                getchar();
                break;
            case EMI:
                printf("\nYou selected to calculate EMI for a particular loan amount. Enter your loan amount\n");
                scanf("%ld",&amount);
                printf("\nEnter your loan tenur in years\n");
                scanf("%ld",&number_of_years);
                printf("\nEnter rate of interest\n");
                scanf("%f",&rate_of_interest);
                result=emi(amount,number_of_years,rate_of_interest);
                printf("\nEMI is %ld\n",result);
                printf("\nPress Enter to continue\n"); 
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
        getchar();
        return;  
    }
}

/**
* @brief Check if the operation is a valid operation
 * 
 * @param[in] operation variable selecting opearation
 * @return 0
 */
int valid_operation(int operation)
{
    return ((GRATUITY <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
