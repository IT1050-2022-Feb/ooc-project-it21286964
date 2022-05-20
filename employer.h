#pragma once
#include <iostream>
#include <cstring>

#include "RegisteredUser.h"
//#include "jobVacancy.h"
//#include "application.h"

using namespace std;

class employer: public RegisteredUser{

public:
employer();
employer(const char EID[], const char EName[], const char EType[], const char EPwd[], int EAge, const char EEmail[], const char EContctNo[]) : RegisteredUser(EID, EName, EType, EPwd, EAge, EEmail, EContctNo) {}
void displayemployer();
 //void postVacancies(jobVacancy *vac);
 //void editVacancies(jobVacancy *vac);
 //void deleteVacancies(jobVacancy *vac);
 //void respondApplications(application *app);
 ~employer();
};