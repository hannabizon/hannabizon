#include <iostream>
using namespace std;

int main()
{
    int liczba;
    int suma = 0; //suma wprowadzonych cyfr

    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    
    int licznik = 0; // oznacza liczbe cyfr
    while (liczba) {   // while liczba != 0?
		suma = suma + liczba%10;
		liczba = liczba/10; // inaczej liczba /= 10
		licznik++;}
	
	cout << "Wprowadziles liczbe skladajaca sie z "<< licznik << " cyfr, ich suma wynosi: " << suma << endl;	
	
	return 0;
	
	}