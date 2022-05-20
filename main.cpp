#include "RegisteredUser.h"
#include "Administrator.h"
#include "employer.h"
#include "company.h"
#include "Feedback.h"
#include "Report.h"
//#include "Application.h"
#include "JobSeeker.h"
#include "Vacancy.h"

#include <iostream>
#include <cstring>

int main() 
{
 Administrator* a1 = new
Administrator("RMAD001","ManulaGunatilleke","Admin","M005G0010",20,"Manula@RM
.lk","0705883826");
 a1->displayAdministrator();
 a1->SetVacancyApproveStatus(1000, 5000, 300, 50);
 a1->displayVacancyApproveReport();
 delete a1;

//employer
employer *e1 = new
employer("RMED001","Janith","Employer","J030G0010",20,"Janith@RM.lk","0703883
826");
employer *e2 = new
employer("RMAD001","Nisal","Employer","N050G0010",20,"Nisal@RM.lk","070288382
6");
//e1->postVacancies(v1);
//e2->postVacancies(v2);
//e1->editVacancies(v1);
//e2->editVacancies(v2);
//e1->deleteVacancies(v1);
//e2->deleteVacancies(v2);
//e1->respondApplications(a1);
//e2->respondApplications(a2);
e1->displayemployer();

//company
company *c1 = new
company("RM10060","Oracle","Berlin","0332344344","ocle69@gmail.com");
c1->displayCompDetails();
c1->updateCompDetails();
c1->listEmp();
//c1->purchasePlan();
c1->listPay();
company *c2 = new
company("RM10260","Codec","Sydney","0232564377","codecorg44@gmail.com");
c2->displayCompDetails();
c2->updateCompDetails();
c2->listEmp();
//c2->purchasePlan();
c2->listPay();
//destructors
delete e1;
delete e2;
delete c1;
delete c2;
 

 Feedback *f1 = new Feedback("RMFE500","Good company","Employee");
 f1->displayFeedback();
delete f1;
 
 JobSeeker *js1 = new JobSeeker("RMJS001","Aj","Job 
Seeker","JS55Second",24,"aj@sliit.lk","0712345423");
 js1->displayJSDetails();
 delete js1;
 return 0;
} 