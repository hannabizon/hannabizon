#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, d;
    cout << "Podaj długość boku kwadratu: " << endl;
    cin >> a;
    cout << "Długość przekątnej kwadratu wynosi: " << endl;
    d = a*sqrt(2);
    cout << d << endl;

    return 0;
}
