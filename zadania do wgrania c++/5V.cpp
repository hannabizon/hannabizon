//user definiuje liczbę elementów w tablicy
//używając pętli do_while wyświetl 1 i ostatni element tablicy oraz ich adres

#include <iostream>
using namespace std;

int main(){

int d; // zmienna długość tablicy
cout << "Wprowadz dlugosc twojej tablicy: " << endl;
cin >> d;

int i=0;
int tab[d]; // tablica o rozmiarze zdefiniowanym przez usera
do {
cout << "tab[" << i << "]= ";
cin >> tab[i]; // wyświetlam wszystkie elementy tablicy
i=i+1; //zaczynamy od 0, później sprawdza dla 1
} while (i<d); //wychodzimy z pętli jak i jest mniejsze od zadeklarowanej długości

cout << " " << endl;
cout << "i=" << i << endl;

cout << "pierwszy element tablicy tab[0]=" << tab[0] << endl;
cout << "&adres tab[0]=" << &tab[0] << endl;
cout << " " << endl;
cout << "ostatni element tablicy tab[d]=" << tab[d-1] << endl;
cout << "&adres ostatniego elementu tablicy tab[d]=" << &tab[d-1] << endl;
cout << " " << endl;

    return 0;
}