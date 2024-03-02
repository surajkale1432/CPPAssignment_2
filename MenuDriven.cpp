// MenuDriven
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include<iostream>
#include <iomanip>
using namespace std;

struct Employee
{
    int id;
    char *name[20];
    double salary;

    // setters
    void setId(int id)
    {
        this->id = id;
    }
    void setName(const char *name)
    {
        strcpy(this->name,name);
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // gettters
    int getId()
    {
        return this->id;
    }
    char *getName()
    {
        return this->name;
    }
    double getSalary()
    {
        return this->salary;
    }

    // default
    Employee()
    {
        this->id = 0;
        strcpy(this->name, "NotGiven");
        this->salary = 0;
    }
    // parameterised Constructor
    Employee(int id, const char *name, double salary)
    {
    }
};
int main()
{
    Employee e1;
}