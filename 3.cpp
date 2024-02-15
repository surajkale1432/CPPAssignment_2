//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include<iostream>
#include <iomanip>

using namespace std;
struct Student
{
    float percent;
    void setPercent(float per)
    {
        this->percent=per;
    }
    float getPercent()
    {
        return this->percent;
    }
    Student()
    {
        this->percent=0;
    }
    Student(float per)
    {
        this->percent=per;
    }
};
struct Employee
{
    float salLPA;
    void setSal(float sal)
    {
        this->salLPA=sal;
    }
    float getSal()
    {
        return this->salLPA;
    }
    Employee()
    {
        this->salLPA=0;
    }
    Employee(float sal)
    {
        this->salLPA=sal;
    }
};
struct Loan
{
    int loanAmmount;

    void grantLoan(Student s1)
    {
        if(s1.getPercent()>=80)
        {
            printf("\nStudent is Eligible for Loan : 2,00,000/-");
            loanAmmount=200000;
        }
        else if(s1.getPercent()<80 && s1.getPercent()>=60)
        {
            printf("\nStudent is Eligible for Loan : 1,00,000/-");
            loanAmmount=100000;
        }
        else if(s1.getPercent()>=40 && s1.getPercent()<60)
        {
            printf("\nStudent is Eligible for Loan : 50,000/-");
            loanAmmount=50000;
        }
        else if (s1.getPercent()<40)
        {
            printf("\nSorry Student is not eligible for any Loan");
        }
    }
    void grantLoan(Employee e1)
    {
        if(e1.getSal()>=1200000)
        {
            loanAmmount=700000;
        }
        else if(e1.getSal()<1200000 && e1.getSal()>=1000000)
        {
            loanAmmount=600000;
        }
        else if(e1.getSal()>=600000 && e1.getSal()<1000000)
        {
            loanAmmount=500000;
        }
        else if(e1.getSal()<600000 && e1.getSal()>=400000)
        {
            loanAmmount=400000;
        }
        else if(e1.getSal()<400000 && e1.getSal()>1)
        {
            cout<<"\nSorry !!! Employee is not eligible for any Loan";
        }
        else{
            cout<<"\nInvalid salary ammount entered by user...!!!";
        }
        if(e1.getSal()>400000)
        {
            cout<<"\nEmployee is eligible for loanAmmount = "<<loanAmmount;
        }
    }
    
};
int main()
{
    Student s1;
    Employee e1;
    Loan l1;
    float per,salaryInLPA;
    cout<<"\nEnter Percentage for Student = ";
    cin>>per;
    s1.setPercent(per);
    l1.grantLoan(s1);

    cout<<"\n\nEnter Employee Salary per Annum like '250000'\nsalary = ";
    cin>>salaryInLPA;
    e1.setSal(salaryInLPA);
    l1.grantLoan(e1);
}
