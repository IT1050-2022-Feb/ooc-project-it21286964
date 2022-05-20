#pragma once
#include <iostream>
#include <cstring>

#include "employer.h"
#include "RegisteredUser.h"
//#include "Vacancy.h"
//#include "Application.h"

using namespace std;

employer:: employer()
{
 
}

void employer::displayemployer()
{
cout << "Employer ID = " << PID << endl;
cout << "Employer Name = " << PersonName << endl;
cout << "Employer Password = " << personPassword << endl;
cout << "Employer Age = " << personAge << endl;
cout << "Employer = " << personType << endl;
cout << "Employer Email = " << personEmail << endl;
cout << "Employer ContactNumber = " << personContactNo << endl;
}

//void employer:: postVacancies(Vacancy *vac){}

//void employer:: editVacancies(Vacancy *vac){}

//void employer:: deleteVacancies(Vacancy *vac){}

//void employer:: respondApplications(Application *app){}

employer:: ~employer()
{
 
}