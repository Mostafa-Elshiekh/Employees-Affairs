// Created by mustafa on 10/15/2020.
#include <iostream>
using namespace std;
#include <string>
#include <utility>
#include "Employee.h"

int num=0;
int j=0;
Employee::Employee() :name("Unknown"),id(0),salary(0.0)
{
}

Employee::Employee(string n, int i, float s)
{
  name=std::move(n);
  id=i;
  salary=s;
}

void Employee::SetName(string n)
{
 name=std::move(n);
}

void Employee::SetId(int i)
{
  id=i;
}

void Employee::SetSalary(float s)
{
  salary=s;
}

/*void Employee::print() //can use it by inheritance and overriding on it.
{
    cout<<"The name of this employee is "<<name<<"\n";
    cout<<"The id of this employee is "<<id<<"\n";
    cout<<"The salary of this employee is "<<salary<<"\n";
}*/


Sales::Sales() :Employee()
{
    Gross_Sales=0.0;
    Commission_Rate=0.0;
}
Sales::Sales(string n,int i,float sa,float Gr,float Co) :Employee(n,i,sa)
{
     Gross_Sales=Gr;
     Commission_Rate=Co;
     if(j==0)
     {
         cout << "\n\" Welcome to Employees Affairs \"\n";
         cout << "day:date:time " __TIMESTAMP__ << endl;
     }
    printf("\nEnter id from[100:105] to search for any employee... \n");
     j++;
}

void Sales::SetGrossSales(float Gr)
{
     Gross_Sales=Gr;
}

void Sales::SetCommisstionRate(float Co)
{
     Commission_Rate=Co;
}

float Sales::GetTotalSalary()
{
    float TotalSalarySales;
    TotalSalarySales=salary+(Gross_Sales * Commission_Rate);
    return TotalSalarySales;
}

void Sales::print() /*This function is Virtual and Pure, Which This class
                    inheritance from Base class (Employee)*/
{
    cout<<"\nThe Name of this saler is "<<name<<"\n";
    cout<<"The ID of this saler is "<<id<<"\n";
    cout<<"The Salary of this saler is "<<salary<<"\n";
    cout<<"The Gross_Sales of this saler is "<<Gross_Sales<<"\n";
    cout<<"The Commission_Rate of this saler is "<<Commission_Rate<<"\n";
    cout<<"The TotalSalary of this saler is "<<GetTotalSalary()<<"\n";
    cout<<"\n";
}

/*Sales ::~Sales()
{
    cout<<"\n\" Have a nice day \"\n";

}*/


Engineer::Engineer() :Employee()
{
    Specialty="Unknown";
    Experience=0.0;
    OverTimeHours=0.0;
    OverTimeHourPrice=0.0;
}

Engineer::Engineer(string n,int i,float sa,string Sp,string Ex, float Over_Time_Hours,float Over_Time_HourPrice)
  :Employee(std::move(n),i,sa)
{
     Specialty=std::move(Sp);
     Experience=std::move(Ex);
     OverTimeHours=Over_Time_Hours;
     OverTimeHourPrice=Over_Time_HourPrice;
}

void Engineer::SetSpecialty(string Sp)
{
     Specialty=std::move(Sp);
}

void Engineer::SetExperience(string Ex)
{
    Experience=std::move(Ex);
}

void Engineer::SetOverTimeHours(float Over_Time_Hours)
{
   OverTimeHours=Over_Time_Hours;
}

void Engineer::SetOverTimeHourPrice(float Over_Time_HourPrice)
{
    OverTimeHourPrice=Over_Time_HourPrice;
}

float Engineer::GetTotalSalary()
{
    float TotalSalaryEng=salary + ( OverTimeHours * OverTimeHourPrice);
    return TotalSalaryEng;
}

void Engineer::print()  /*This function is Virtual and Pure, Which This class
                        inheritance from Base class (Employee)*/
{
    cout<<"The Name of this Engineer is "<<name<<"\n";
    cout<<"The ID of this Engineer is "<<id<<"\n";
    cout<<"The Salary of this Engineer is "<<salary<<"\n";
    cout<<"The Specialty of this Engineer is "<<Specialty<<"\n";
    cout<<"The Experience of this Engineer is "<<Experience<<"\n";
    cout<<"The OverTimeHours of this Engineer is "<<OverTimeHours<<"\n";
    cout<<"The OverTimeHourPrice of this Engineer is "<<OverTimeHourPrice<<"\n";
    cout<<"The TotalSalaryEng of this Engineer is "<<GetTotalSalary()<<"\n";

}

