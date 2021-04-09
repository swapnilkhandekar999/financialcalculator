/**
 * @file header.h
 * @author Swapnil Khandekar (you@domain.com)
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

/**
 * @brief Error values for financial calculator operations
 * 
 */
#define LL unsigned long long int
typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;

/**
 * @brief Structure for Complex number
 * 
 */
typedef struct complex_t {
    float real;         /**< real part of the complex number */
    float imaginary;    /**< real part of the complex number */
} complex_t;


/**
* @brief computes sum of teh two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] csum Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t gratuity_calculation(LL basic_salary,int years);


/**
 * @brief TODO Add the remaining functions
 * 
 */
