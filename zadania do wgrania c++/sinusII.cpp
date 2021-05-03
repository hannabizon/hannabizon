#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

float kat, radian;

cout << "Podaj wartość kata w stopniach: " << endl;
cin >> kat;

radian = kat*M_PI/180;
cout << "Wartość sinusa wynosi: " << sin(radian) << endl;
cout << "Wartość cosinusa wynosi: " << cos(radian) << endl;


return 0;

}