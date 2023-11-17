#include<iostream>
#include<conio.h>
#include<cstdlib>

class FLOAT
{
private:
    float a, b;

public:
    void getdata();
    void display();
    FLOAT operator+(FLOAT);
    FLOAT operator-(FLOAT);
    FLOAT operator*(FLOAT);
    FLOAT operator/(FLOAT);
};

void FLOAT::getdata()
{
    std::cout << "enter the values of a and b:";
    std::cin >> a >> b;
}

void FLOAT::display()
{
    std::cout << "\na=" << a << "\nb=" << b;
}

FLOAT FLOAT::operator+(FLOAT d1)
{
    FLOAT d2;
    d2.a = a + d1.a;
    d2.b = b + d1.b;
    return d2;
}

FLOAT FLOAT::operator-(FLOAT d1)
{
    FLOAT d2;
    d2.a = a - d1.a;
    d2.b = b - d1.b;
    return d2;
}

FLOAT FLOAT::operator*(FLOAT d1)
{
    FLOAT d2;
    d2.a = a * d1.a;
    d2.b = b * d1.b;
    return d2;
}

FLOAT FLOAT::operator/(FLOAT d1)
{
    FLOAT d2;
    d2.a = a / d1.a;
    d2.b = b / d1.b;
    return d2;
}

int main()
{
    FLOAT d1, d2, d3;

    std::cout << "enter first object\n";
    d1.getdata();

    std::cout << "enter second object\n";
    d2.getdata();

    d3 = d1 + d2;
    d3.display();

    d3 = d1 - d2;
    d3.display();

    d3 = d1 * d2;
    d3.display();

    d3 = d1 / d2;
    d3.display();

    getch();
    return 0;
}
