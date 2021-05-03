#include <iostream>
#include <cmath>
using namespace std;
// zadanie rozwiązane przy użyciu pętli do while i for

int main()
{
	float suma = 0; //definiujemy zmienne (float = zmiennoprzecinkowe)
	float ilosc = 0; //ilość liczb wprowadzonych przez użytkownika
	float a = 0; // liczby wprowadzone przez użytkowanika
	
	do { 
 	cout << "Podaj ilosc liczb, ktora wprowadzisz: " ;
	cin >> ilosc; // w tym miejscu wczytuję ilość podaną przez usera
		if (ilosc<=0){
			cout << "Podaj wartosc wieksza od 0!" << endl; // sprwdzam warunek
		    }
	    } while (ilosc<=0);
	
	
	for (int i=0; i<ilosc; i++){
	    
	    cout << "wprowadzona liczba: " ;
	    cin >> a;
	    
	    suma=suma+a;
	}
	
	cout << "Srednia " << ilosc << " liczb wynosi: " << suma/ilosc << endl << endl;

	return 0;
}