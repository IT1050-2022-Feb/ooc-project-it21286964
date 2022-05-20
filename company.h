#pragma once
#include <iostream>
#include <cstring>

//#include "payment.h"
//#include "paymentPlan.h"
#include "employer.h"

using namespace std;

class company
{
private:
 char compID[10];
 char compName[30];
 char compLocation[30];
 char compContno[10];
 char compMail[30];

public:
 company();
 company(const char CID[], const char cName[], const char cLocation[], const char cContno[], const char cMail[]);
 void displayCompDetails();
 void updateCompDetails();
 void listEmp();
 //void purchasePlan(payment *pay);
 void listPay();
 ~company();
};