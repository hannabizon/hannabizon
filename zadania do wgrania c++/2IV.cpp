#include <iostream>
#include <cmath>
using namespace std;
// zadanie rozwiązane przy użyciu pętli do while i while
int main()
{
	float suma = 0; //definiujemy zmienne (float = zmiennoprzecinkowe)
	float ilosc = 0; //ilość liczb wprowadzonych przez użytkownika
	float a = 0; // liczby wprowadzone przez użytkowanika
	// definiuje zmienna wyzej ilosc = 0
	do { 
 	cout << "Podaj ilosc liczb, ktora wprowadzisz: " ; //instrukcja
	cin >> ilosc; // w tym miejscu wczytuję ilość podaną przez usera
		if (ilosc<=0){ // sprawdzam warunek brzegowy
			cout << "Podaj wartosc wieksza od 0!" << endl; 
		    }
	    } while (ilosc<=0); // sprawdzenie warunku
	
    int i = 0; // zmienna która będzie literowana musi być przed whilem
	while (i<ilosc){  //w nawiasie umieszczamy warunek. podczas gdy i<ilosc wyswietl i zwiększ
	    cout << "Wprowadzona liczba: ";
	    cin >> a;
	    i++; // za pomocą pętli wyświetla się "wprowadzona liczba ..." x ilość
	    
	    suma=suma+a;
	}
	
	cout << "Srednia " << ilosc << " liczb wynosi: " << suma/ilosc << endl << endl;

	return 0;
}
