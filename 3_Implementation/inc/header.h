/**
 * @file header.h
 * @author Swapnil Khandekar (swapnilkhandekar999@gmail.com)
 * @brief Functions to perform Gratuity Calculation
 * Fixed Deposit Maturity Amount Calculation
 * Return on Investment for Mutual Funds calculation
 * EMI Calculation
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Error values for financial calculator operations
 * 
 */
//typedef enum error_t {
  //  ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    //ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
  //  SUCCESS = 0             /**< Compute operation is successful */
//}error_t;

/**
* @brief computes gratuity of teh two complex numbers
 * 
 * @param[in] amount Pointer to amount
 * @param[in] number_of_years Pointer to number_of_years
 * @param[in] number_of_months Pointer to number_of_months
 * @param[out] gratuity_amount Pointer to store gratuity_amount
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
long int gratuity_calculation(long int amount, long int number_of_years, long int number_of_months, long int eligibility);

long int fixed_deposit(long int amount,long int number_of_years, float rate_of_interest);

long int roi(long int amount,long int number_of_years, float rate_of_interest);

long int emi(long int amount,long int number_of_years, float rate_of_interest);

/**
 * @brief TODO Add the remaining functions
 * 
 */

#endif //HEADER_H