// 2. Write a function to calculate area of shape, for calculating area of triangle,
// rectangle, circle differently
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include<iostream>
#include <iomanip>



using namespace std;
struct Circle
{
    float r;
    // setter
    void setR(float r)
    {
        this->r = r;
    }
    // getter
    float getR()
    {
        return this->r;
    }
    // default
    Circle()
    {
        this->r = 0;
    }
    Circle(float r)
    {
        this->r = r;
    }
};
struct Rectangle
{
    float l, w;
    // setter
    void setL(float l)
    {
        this->l = l;
    }
    void setW(float w)
    {
        this->w = w;
    }
    // getter
    float getL()
    {
        return this->l;
    }
    float getW()
    {
        return this->w;
    }
    // default
    Rectangle()
    {
        this->l = 0;
        this->w = 0;
    }
    // para
    Rectangle(float l, float w)
    {
        this->l = l;
        this->w = w;
    }
};
struct Tringle
{
    /* data */
    float b, h;
    // setter
    void setB(float b)
    {
        this->b = b;
    }
    void setH(float h)
    {
        this->h = h;
    }
    // getter
    float getB()
    {
        return this->b;
    }
    float getH()
    {
        return this->h;
    }
    // default
    Tringle()
    {
        this->b = 0;
        this->h = 0;
    }
    // para
    Tringle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }
};
struct Shape
{
    float areaC;

    float area(Circle c1)
    {
        areaC = 3.147 * c1.getR() * c1.getR();
        return areaC;
    }
    float area(Rectangle r1)
    {
        areaC = r1.getL() * r1.getW();
        return areaC;
    }
    float area(Tringle t1)
    {
        areaC = 0.5 * t1.getB() * t1.getH();
        return areaC;
    }
};
int main()
{
     Circle c1;
     Rectangle r1;
     Tringle t1;
     Shape s1;

     float r,l,w,b,h,areaC;

     cout<<"\nEnter Circle Value\nr = ";
     cin>>r;
     c1.setR(r);

     cout<<"\n\nEnter Rectangle Values\nL = ";
     cin>>l;
     cout<<"\nW = ";
     cin>>w;
     r1.setL(l);
     r1.setW(w);

     cout<<"\nEnter Tringle Values\nB = ";
     cin>>b;
     cout<<"\nH = ";
     cin>>h;
     t1.setB(b);
     t1.setH(h);

     areaC = s1.area( c1);
     cout<<"\nArea of Cirlce = "<<std::setprecision(4)<<areaC;

     areaC = s1.area( r1);
     cout<<"\nArea of Rectangle = "<<std::setprecision(4)<<areaC;

     areaC = s1.area( t1);
     cout<<"\nArea of Tringle = "<<std::setprecision(4)<<areaC;
}