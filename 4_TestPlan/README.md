# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Calling User Menu|financial_calculator_menu();|User menu appears|User menu appeared|Requirement based |
|  H_02       |Switching from menu to the gratuity calculation|1|Gratuity menu appears|Gratuity menu appears|Scenario based    |
|  H_03       |Switching from menu to the FD Maturity amount calculation|2|FD menu appears|FD menu appears|Scenario based    |
|  H_04       |Switching from menu to the ROI calculation|3|ROI menu appaers|ROI menu appaers|Scenario based    |
|  H_05       |Switching from menu to the gratuity calculation|4|EMI menu appaers|EMI menu appaers|Scenario based    |
|  H_06       |Exiting the application|Application closes when user enters 5|Application closes|Application closed|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Performing gratuiry calculation and showing result|(3000,5,5,1)|10384|10384| Requirement based |
|  L_02       |Performing FD maturity amount calculation and showing result|(100000,3,6.65)|121306|121306| Requirement based |
|  L_03       |Performing ROI calculation and showing result|(0,5,10)|0|0|Requirement based |
|  L_04       |Performing EMI calculation and showing result| (0,5,10)|0|0|Requirement based  |

