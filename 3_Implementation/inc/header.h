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
* @brief computes gratuity amount
 * 
 * @param[in] amount variable for passing amount
 * @param[in] number_of_years variable for passing number_of_years
 * @param[in] number_of_months variable for passing number_of_months
 * @param[in] eligibility variable for passing eligibility
 * @param[out] result variable for storing gratuity amount
 * @return result
 */
long int gratuity_calculation(long int amount, long int number_of_years, long int number_of_months, long int eligibility);

/**
* @brief computes fixed deposit maturity amount
 * 
 * @param[in] amount variable for passing amount
 * @param[in] number_of_years variable for passing number_of_years
 * @param[in] rate_of_interest variable for passing rate_of_interest
 * @param[out] result variable for storing fixed deposit maturity amount
 * @return result
 */
long int fixed_deposit(long int amount,long int number_of_years, float rate_of_interest);

/**
* @brief computes fixed deposit maturity amount
 * 
 * @param[in] amount variable for passing amount
 * @param[in] number_of_years variable for passing number_of_years
 * @param[in] rate_of_interest variable for passing rate_of_interest
 * @param[out] result variable for storing return on investment (ROI) amount
 * @return result
 */
long int roi(long int amount,long int number_of_years, float rate_of_interest);

/**
* @brief computes fixed deposit maturity amount
 * 
 * @param[in] amount variable for passing amount
 * @param[in] number_of_years variable for passing number_of_years
 * @param[in] rate_of_interest variable for passing rate_of_interest
 * @param[out] result variable for storing EMI amount
 * @return result
 */
long int emi(long int amount,long int number_of_years, float rate_of_interest);

#endif //HEADER_H