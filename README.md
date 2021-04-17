

|Build|Unit Test|cppcheck|Valgrind|Coverage|Git Inspector|
|:--:|:--:|:--:|:--:|:--:|:--:|
| [![Build Status](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/cbuild.yml/badge.svg)](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/cbuild.yml) | [![Unit Testing](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/unitTesting.yml/badge.svg)](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/unitTesting.yml) |[![cppcheck](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/cppcheck.yml)| [![CodeQuality](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/dynamic_code_quality.yml/badge.svg)](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/dynamic_code_quality.yml) | [![CI-Coverage](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/coverage.yml/badge.svg)](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/coverage.yml) |[![Contribution Check](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/swapnilkhandekar999/financialcalculator/actions/workflows/gitinspector.yml)|



# Financial Calculator

It provides you with quick calculation of below mentioned services:

* Gratuity Calculator for employees of private sector in India
* Fixed Deposit Maturity Amount Calculator
* Return on Investment for Mutual Funds
* EMI Calculator

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
## Contributors List and Summary
PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No of Test Cases|Test Case Pass
---------|-------------|----------------|----------------|---------------|-------------|--------------
`259958` | Swapnil Khandekar  | SC1, SC2, SC3, SC4, SC5, SC6, SC7, SC8| 1   | 0  | 4   | 4     

| No |Feature  |
|--|--|
| SC1 |Calculating the Gratuity  |
| SC2 |Calculating the FD maturity amount |
| SC3 |Calculating the ROI |
| SC4 |Calculating the EMI |
| SC5 |Unit Testing the code with various testcases |
| SC6 |Building the all workflows In Git |
| SC7 |Designing each module with readme files |
| SC8 |Gathering all requirments and designing each phase |
## Challenge Faced and How Was It Overcome
| No |Challenge  | Solution
|--|--|--|
| 01 | Output was 0 even after entering correct input  | Type casted integer division to float  |
| 02 | Make file not working even after following all steps  | Added make to environment variables  |
# Usage of the project
```sh
# For Building the main application
make
# For Running the main application
make run
# For Building the test file
make test
```
