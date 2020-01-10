#include <iostream>
#include <string>
using namespace std;

string compress(string A)
{
    string y;
    int i = 0, N = A.size();
    while(i < N)
    {
        if(i%3 == 0)
        {
            y = y + A[i];
        }
        i++;
    }
    return y;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");

    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
