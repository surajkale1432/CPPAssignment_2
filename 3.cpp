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
    // void getLoan(Employee e1)
    // {
    //     if(s1.getPercent()>=80)
    //     {
    //         printf("\nStudent is Eligible for Loan : 2,00,000/-");
    //     }
    //     else if(s1.getPercent()<80 && s1.getPercent()>=60)
    //     {
    //         printf("\nStudent is Eligible for Loan : 1,00,000/-");
    //     }
    //     else if(s1.getPercent()>=40 && s1.getPercent()<60)
    //     {
    //         printf("\nStudent is Eligible for Loan : 50,000/-");
    //     }
    //     else if (s1.getPercent()<40)
    //     {
    //         printf("\nSorry Student is not eligible for any Loan");
    //     }

    // }
};
int main()
{
    Student s1;
    Loan l1;
    float per;
    // cout<<"\nEnter Percentage for Student = ";
    cin>>per;
    // scanf("%f",&per);
    s1.setPercent(per);

    l1.grantLoan(s1);


}
