#include "unity.h"
#include "header.h"

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
  TEST_ASSERT_EQUAL(10384, gratuity_calculation(3000,5,5,1));
  TEST_ASSERT_EQUAL(103846, gratuity_calculation(30000,5,5,1));
  TEST_ASSERT_EQUAL(1038461, gratuity_calculation(300000,5,5,1));
  TEST_ASSERT_EQUAL(10384616, gratuity_calculation(3000000,5,5,1));
  TEST_ASSERT_EQUAL(0, gratuity_calculation(0,5,5,1));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(15000, gratuity_calculation(30000,5,5,1));
}

void test_fixed_deposit(void) {
  TEST_ASSERT_EQUAL(121306, fixed_deposit(100000,3,6.65));
  TEST_ASSERT_EQUAL(0, fixed_deposit(0,3,6.65));
  TEST_ASSERT_EQUAL(2593743, fixed_deposit(1000000,10,10));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(100, fixed_deposit(100000,3,6.65));
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

