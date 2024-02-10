struct ComplexInfo
{
    int real, imaginary;
    // SETTERS
    void setReal(int real)
    {
        this->real = real;
    }
    void setImaginary(int img)
    {
        this->imaginary = img;
    }
    // getters
    int getReal()
    {
        return this->real;
    }
    int getImaginary()
    {
        return this->imaginary;
    }
    // default
    ComplexInfo()
    {
        this->real = 0;
        this->imaginary = 0;
    } // parameterized
    ComplexInfo(int real, int img)
    {
        this->real = real;
        this->imaginary = img;
    } //  void display()
      //  {  //      printf("\n\nDisplay");
      //      printf("\n%d+%di", this->real, this->imaginary);  //  }
    int operator>(ComplexInfo c2)
    {
        if (this->real > c2.real)
            return 1;
        else
            return 0;
    }
};
int main()
{
    ComplexInfo c1(10, 20);
    ComplexInfo c2(20, 15);
    if (c1 > c2) // c1.operator > (c2)
    {
        printf("c1 is greater");
    }
    else
    {
        printf("c2 is greater");
    }
}