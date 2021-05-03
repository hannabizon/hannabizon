//WSKAŹNIKI
//zdefiniuj zmienną x typu float, przypisz jej dowolną wartość
//zdefiniuj wskaźnik na tę zmienną, wyświetl wartość wskaźnika i jego adres

#include <iostream>
using namespace std;
int main() {
float x=1.5;
float *p=&x;
cout << "x = " << x << "\t address: " << &x << endl;
cout << "p = " << *p << "\t address: " << p << endl;

return 0;
}