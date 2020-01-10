#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string name;
    float GPA;

    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your GPA?: ";
    cin >> GPA;
    if(GPA >= 3.50)
    {
        cout << name << " Inw Jrim Jrim!!!";
    }else{
        cout << "Try harder, " << name << "!!!";
    }
    return 0;
}
