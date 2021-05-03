//napisz funkcję, która pomnoży 2 liczby wprowadzone przez usera

#include <iostream>
using namespace std;

int multiply (int, int); // 1. deklaracja f.multiply, która mnoży 2 liczby całkowite
    
    int main(){

    cout << "Wprowadz 2 liczby calkowite: " << endl;
    int a, b; // definiujemy zmienne
    cin >> a >> b;
    
    cout << multiply(a,b) << endl; //3.wywołanie funkcji multiply
    
    return 0;
}

int multiply (int a , int b){ // 2. definiujemy funkcję (podajemy nazwę zmiennych!)  
cout << "Pierwsza wprowadzona wartosc to: " << a << " Druga wprowadzona wartosc to: " << b << endl;
cout << "Wynik mnozenia tych liczb wynosi = ";
return a*b; //funkcja int musi zwrócić jakąś wartość, tylko void jej nie zwraca
            //cout << "Iloczyn podanych liczb wynosi: " << a*b << endl; 
cout << " " << endl;

}