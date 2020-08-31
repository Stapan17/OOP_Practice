#include <bits/stdc++.h>
using namespace std;

class one
{
private:
    int real, imag;

public:
    one() : real(0), imag(0) {}

    void setNumber(int x, int y)
    {
        real = x;
        imag = y;
    }

    void showNumber()
    {
        cout << "Number is " << real << " + i(" << imag << ")\n";
    }

    // one Addition(one c1, one c2)
    // {
    //     one c3;
    //     c3.real = c1.real + c2.real;
    //     c3.imag = c1.imag + c2.imag;

    //     return c3;
    // }

    one Addition(one c2)
    {
        one c3;
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;

        return c3;
    }

    void Multi(one c2)
    {
        real *= c2.real;
        imag *= c2.imag;
    }

    one operator+(one);
    one operator*(one);
    operator float();
};

one one::operator+(one c2)
{
    one c3;

    c3.real = real + c2.real;
    c3.imag = imag + c2.imag;

    return c3;
}

one one::operator*(one c2)
{
    one c3;

    c3.real = real * c2.real;
    c3.imag = imag * c2.imag;

    return c3;
}
one::operator float()
{
    float x;
    x = real + (0.01) * imag;

    return x;
}
int main()
{

    cout << "\nEnter First  Numbers ";
    int x1, y1;
    cin >> x1 >> y1;

    cout << "Enter First  Numbers ";
    int x2, y2;
    cin >> x2 >> y2;

    one c1, c2, c3, c4;

    c1.setNumber(x1, y1);
    c2.setNumber(x2, y2);

    //Adding two objects in two diffrent method
    c3 = c1.Addition(c2);
    c4 = c1 + c2;

    //Display addition
    cout << "\nAfter Addition the number is : \n";
    c3.showNumber();
    c4.showNumber();

    cout << "\nBefore multipling the number is : \n";
    c1.showNumber();
    c1.Multi(c2);
    cout << "After multipling the number is : \n";
    c1.showNumber();

    cout << "\nBefore multipling the number is : \n";
    c2.showNumber();
    c2 = c2 * c1;
    cout << "After multipling the number is : \n";
    c2.showNumber();

    //Type Casting
    //objects to float number
    cout << "\n\n";
    c1.showNumber();
    float ans = c1.operator float();
    cout << "Corresponding Float value is  : ";
    cout << ans;

    cout << "\n\n";
    c2.showNumber();
    ans = c2.operator float();
    cout << "Corresponding Float value is  : ";
    cout << ans;

    return 0;
}