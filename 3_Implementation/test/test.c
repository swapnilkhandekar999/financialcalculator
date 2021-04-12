#include "C:\Users\swapn\Desktop\financialcalculator\3_Implementation\unity\unity.h"
#include "C:\Users\swapn\Desktop\financialcalculator\3_Implementation\inc\header.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME "financialcalculator"

/* Prototypes for all the test functions */
void test_gratuity(void);
void test_fixed_deposit(void);
void test_roi(void);
void test_emi(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_gratuity);
  RUN_TEST(test_fixed_deposit);
  RUN_TEST(test_roi);
  RUN_TEST(test_emi);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_gratuity(void) {
  TEST_ASSERT_EQUAL(30, gratuity_calculation(30000,5,5,1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, gratuity_calculation(30000,5,5,1));
}

void test_fixed_deposit(void) {
  TEST_ASSERT_EQUAL(-3, fixed_deposit(100000,3,6.65));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, fixed_deposit(100000,3,6.65));
}

void test_roi(void) {
  TEST_ASSERT_EQUAL(0, roi(100000,5,10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, roi(100000,5,10));
}

void test_emi(void) {
  TEST_ASSERT_EQUAL(0, emi(100000,5,10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, emi(100000,5,10));
}

