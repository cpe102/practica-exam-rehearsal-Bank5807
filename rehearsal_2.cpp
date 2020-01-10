#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    double sum = 0, x;
    while(x != 0){
        cout << "Enter x: ";
        cin  >> x;
        if(x > 0){
            sum = sum + x;
        }
    }
    cout << "sum = " << sum;
    return 0;
}
