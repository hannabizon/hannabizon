//zdefiniuj 2 zmienne int: a i b, przypisz im dowolne wartości (l.całkowite)
//zdefiniuj referencyjną zmienną do a. Zmodyfikuj wartośc A i B i wyświetl wartość 3 zmiennych: A,B, ref.
//sprawdź czy adres zmeinnej a i ref. jest taki sam. Jeśli tak wyświetl komunikat: "Super, udało się!"

#include <iostream>
using namespace std;

int main() {
int a=5, b=10;

cout << "a = " << a << "\t address: " << &a << endl;
cout << "b = " << b << "\t address: " << &b << endl;
int &ref=a;
cout << "ref = " << ref << "\t address: " << &ref << endl;

a=3;
b=2;

cout << "a = " << a << "\t adress: " << &a << endl;
cout << "b = " << b << "\t adress: " << &b << endl;
cout << "ref = " << ref << "\t address: " << &ref << endl;

if(&a==&ref){
cout << "Swietnie, masz prawidlowe odniesienie!" << endl;
}
return 0;
}