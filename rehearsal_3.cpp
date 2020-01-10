#include <iostream>
#include <cmath>
using namespace std;

double sumSqrt(double N)
{
    double sum = 0, i = 1;
    while(i <= N)
    {
        sum = sum + (1/sqrt(i));
        i++;
    }
    return sum;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);

    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
