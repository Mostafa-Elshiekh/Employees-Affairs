// Created by mustafa on 10/15/2020.
#include <iostream>
using namespace std;
#include <string>

#ifndef STAFF_RECRUITMENT_SYSTEM_EMPLOYEE_H
#define STAFF_RECRUITMENT_SYSTEM_EMPLOYEE_H


class Employee        //Base abstract class
{
public:
    string name;
    int id;
    float salary;
public:
    Employee();                        //default constructor to initialize the attributes by default values
    Employee(string n,int i,float s); // default copy constructor take default values for attributes by user
    void SetName(string n);
    void SetId(int i);
    void SetSalary(float s);
    virtual float GetTotalSalary()=0;/* This function is Virtual and Pure
    1-Virtual :that mean this function is Sharable on any class inheritance it to
    It suits the nature of the class.
    2-Pure that mean this i'm not implement in this class*/
    virtual void print()=0;          // This function is Virtual and Pure
};

class Sales : public Employee       //inheritance from base class (Employee)
{
public:
    float Gross_Sales;
    float Commission_Rate;

public:
    Sales();          //default constructor to initialize the attributes by default values
    Sales(string n,int i,float sa,float Gr,float Co);
    // default copy constructor take default values for attributes by user
    void SetGrossSales(float Gr);
    void SetCommisstionRate(float Co);
    float GetTotalSalary() override; /*This function override from base class to Sharable It suits
      the nature of this class*/
    void print() override;//This function override from base class
    //~Sales();
};

class Engineer : public Employee   //inheritance from base class (Employee)
{
public:
    string Specialty;
    string Experience;
    float OverTimeHours;
    float OverTimeHourPrice;

public:
    Engineer();    //default constructor to initialize the attributes by default values
    Engineer(string n,int i,float sa,string Sp,string Ex,float Over_Time_Hours,float Over_Time_HourPrice);
    // default copy constructor take default values for attributes by user
    void SetSpecialty(string Sp);
    void SetExperience(string Ex);
    void SetOverTimeHours(float OverTimeHours);
    void SetOverTimeHourPrice(float Ov2);
    float GetTotalSalary() override;
    void print() override;       /*This Function override from base function from base
      class that mean this function is Sharable It suits the nature of this class*/
};



#endif //STAFF_RECRUITMENT_SYSTEM_EMPLOYEE_H
