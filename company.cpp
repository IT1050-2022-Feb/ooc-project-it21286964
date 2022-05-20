#pragma once
#include <iostream>
#include <cstring>

#include "company.h"
//#include "payment.h"
//#include "paymentPlan.h"
#include "employer.h"

using namespace std;

company:: company()
{
 strcpy(compID, "");
 strcpy(compName, "");
 strcpy(compLocation, "");
 strcpy(compContno, "");
 strcpy(compMail, "");
}

company:: company(const char CID[], const char cName[], const char cLocation[], const char cContno[], const char cMail[])
{
 strcpy(compID, CID);
 strcpy(compName, cName);
 strcpy(compLocation, cLocation);
 strcpy(compContno, cContno);
 strcpy(compMail, cMail);
}

void company:: displayCompDetails()
{
 cout<< "Company ID: "<< compID<< endl;
 cout<< "Company Name: "<< compName<< endl;
 cout<< "Company Location: "<< compLocation<< endl;
 cout<< "Contact Number: "<< compContno<< endl;
 cout<< "E-mail: "<< compMail<< endl;
}

void company:: updateCompDetails()
{
 
}

void company:: listEmp()
{

}

//void company:: purchasePlan(payment *pay){}

void company:: listPay()
{

}

company:: ~company()
{
 cout<< "Destructor for company class executed succesfully"<< endl;
}