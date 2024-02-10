// 1. Write a functions to add 2 int value, 2 float value, 1 int and 1 float value and vice
// versa . similary write functions for all other arithmetic operations.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct Calculate
{
    int add(int a, int b)
    {
        return a + b;
    }
    float add(int a, float b)
    {
        return a + b;
    }
    float add(float a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }

    //Subtraction
    int sub(int a, int b)
    {
        return a - b;
    }
    float sub(int a, float b)
    {
        return a - b;
    }
    float sub(float a, int b)
    {
        return a - b;
    }
    float sub(float a, float b)
    {
        return a - b;
    }

    //multiplication
    int mul(int a, int b)
    {
        return a * b;
    }
    float mul(int a, float b)
    {
        return a * b;
    }
    float mul(float a, int b)
    {
        return a * b;
    }
    float mul(float a, float b)
    {
        return a * b;
    }

    //division
    int div(int a, int b)
    {
        return a / b;
    }
    float div(int a, float b)
    {
        return a / b;
    }
    float div(float a, int b)
    {
        return a / b;
    }
    float div(float a, float b)
    {
        return a / b;
    }
};
int main()
{
    Calculate c1;
    int a, b, ans, ch,op;
    float c, d, fans;
    printf("\nSelect Your Choice to Calculate");
    printf("\n1. int int\n2. int float\n3. float int\n4. float float\nchoice = ");
    scanf("%d", &ch);
    printf("\nSelect Your Operator");
    printf("\n1. +\n2. -\n3. *\n4. /\nchoice = ");
    scanf("%d", &op);
    if (ch == 1)
    {
        printf("\nEnter Values");
        printf("\nA = ");
        scanf("%d", &a);
        printf("\nB = ");
        scanf("%d", &b);
        (op==1)?ans = c1.add(a, b):(op==2)?ans = c1.sub(a, b):(op==3)?ans = c1.mul(a, b):(op==4)?ans = c1.div(a, b):printf("\nWrong Choice");
    }
    else if (ch == 2)
    {
        printf("\nEnter Values");
        printf("\nA = ");
        scanf("%d", &a);
        printf("\nB = ");
        scanf("%f", &c);
        fans = c1.add(a, c);
    }
    else if (ch == 3)
    {
        printf("\nEnter Values");
        printf("\nA = ");
        scanf("%f", &c);
        printf("\nB = ");
        scanf("%d", &b);
        fans = c1.add(c, b);
    }
    else if (ch == 4)
    {
        printf("\nEnter Values");
        printf("\nA = ");
        scanf("%f", &c);
        printf("\nB = ");
        scanf("%f", &d);
        fans = c1.add(c, d);
    }
    if (ch == 1)
    {
        printf("\n\nAns = %d", ans);
    }
    else
    {
        printf("\n\nAns = %.2f", fans);
    }
}