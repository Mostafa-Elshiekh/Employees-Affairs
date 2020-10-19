#include <iostream>
using namespace std;
#include <string>
#include "Employee.h"


int main() {
    int check=1; // this var to check if user want to continue or break
    int counter=0;
    int flag = 0; //this flag will toggle every once if found id, else will constant
    while (check==1)
    {
        Employee *ptr;  /*I used pointer to make portable or access any function inside any class
        because exist functions with same name(Polymorphism)*/
        Sales *ptr_sel;
        Engineer *ptr_eng;

        Sales seler1("Ahmed", 100, 6000.500, 50000, 0.1); /*i used copy constructor
        to initialize the default value */
        Sales seler2, seler3;    //but with this i used set function to initialize the attributes

        // make the pointer point to seler2 to access the  attributes and methods
        ptr_sel = &seler2;
        ptr_sel->SetName("Ali"); //used pointer nested set function
        ptr_sel->SetId(101);
        ptr_sel->SetSalary(8000);
        ptr_sel->SetGrossSales(10000);
        ptr_sel->SetCommisstionRate(0.1);

        // make the pointer point to seler2 to access the  attributes and methods
        ptr_sel = &seler3;
        ptr_sel->SetName("Ali"); //used pointer nested set function
        ptr_sel->SetId(102);
        ptr_sel->SetSalary(8000);
        ptr_sel->SetGrossSales(10000);
        ptr_sel->SetCommisstionRate(0.1);
        Sales arr_sales[3] = {seler1, seler2, seler3};   // array from sales class

        Engineer eng1("Ali", 103, 8000.6, "SW Engineering", "5 Years", 5.5, 200);
        Engineer eng2("Hossam", 104, 9000.6, "SW Engineering", "6 Years", 7.5, 200);
        Engineer eng3;
        ptr_eng=&eng3;
        ptr_eng->SetName("Mahmoud"); // use pointer to access attribute and method nested set function
        ptr_eng->SetId(105);
        eng3.SetSalary(10000.4);
        eng3.SetSpecialty("SW Engineering");
        eng3.SetExperience("8 years");
        eng3.SetOverTimeHours(10);
        eng3.SetOverTimeHourPrice(200);
        Engineer arr_engs[3] = {eng1, eng2, eng3};   //array from Engineer class
        int id;
        cin >> id;    // take the id which user need to search about it
        for (int i = 0; i < 3; ++i)
        {
            if (arr_sales[i].id == id)       //search about this id in salers of array
            {
                arr_sales[i].print();         //this function it not same the function in the Engineering class

                flag = 1;
            }
            else if (arr_engs[i].id == id) //search about this id in Engineer of array
            {
                arr_engs[i].print();     //this function it not same the function in the seler class
                flag = 1;

            }

        }

        if(flag==0) //flag to identifier is user need to continue or want to break
        {
            cout<<"There is no employee with this id\n";
        }
        if(counter>=0) //because i need this message appearance from second time
        {
            cout << "\n\"if you need continue press 1 \"\n";
            cout << "\"if you need break press 0 \"\n";
            cin >>check;
            if(check==0)
            {
                break;
            }
        }
        counter++;
        flag=0;

    }

    return 0;
}
