//napisz funkcję, która oblicza sumę wszystkich wartości w tab 
//tab wypełnij losowymi liczbami z zakresu 0-99, rozmiar tab=20
//liczby mają się zmieniać przy każdym uruchomieniu programu
//wyświetl tab i sumę na ekranie (do f(suma) przekazujemy tab)

#include <iostream> 
using namespace std; 

int suma (int[]); // deklaracja funkcji

int main()
{
   int tab[20];
   srand(time(0)); // srand(time(0)) - uzależnia liczbę od zegara systemowego, otrzymujemy liczby pseudolosowe (ziarno generatora)
    for (int i =0; i<20; i++){
        tab[i] = rand()%100; //aby otrzymać losowe liczby od 0 do 99 używamy rand()%100
        printf("tab[%d] = %d \n", i, tab[i]);
    }
    cout << " " << endl;
    cout << "suma wyswietlonych elementow wynosi: " << suma(tab) << endl; //wywołanie funkcji () bo funkcja
    cout << " " << endl;
    return 0;
}
    int suma (int tab[]){ //definiujemy funkcję, przekazujemy do niej tablicę
    int suma=0; // definiujemy zmienną suma
    for (int i=0 ; i<20; i++)
        suma=suma+tab[i]; // do sumy będziemy dodawać każdą kolejną wartość z tabeli
    return suma;
}