#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 double stopien, radian;

 cout << "Podaj stopien, dla którego ma być wyliczony sinus i cosinus: ";
 cin >> stopien;
 radian=(stopien/180)*M_PI;
 cout << "sin " << "=" << sin(radian) << endl;
 cout << "cos" << "=" << cos(radian) << endl;

    return 0;
}