//zdefiniuj 3 zmienne typu: int/float/double
//przypisz im dowolne wartości i wyświetl ich adresy i wartość

#include <iostream>
using namespace std;
int main() {
int a=5;
double b=10.44;
float c=2111111111;
cout << "a = " << a << "\t address: " << &a << endl; // apresant nazwa zmiennej - wyświetli adres
cout << "b = " << b << "\t address: " << &b << endl;
cout << "c = " << c << "\t address: " << &c << endl;

return 0;
}