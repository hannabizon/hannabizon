#include <iostream> // biblioteka potrzebna do wprowadzania danych wejściowych/wyjściowych
#include <cstring> // biblioteka obsługująca łańcuchy znakowe

using namespace std;

int main() // funkcja główna
{
 
string txt; // definiujemy zmienną typu string
cout << "Wprowadz teskt, uzywajac malych liter: "; // użytkownik jest proszony o wprowadznie tekstu
cin >> txt; // tekst zostaje wprowadzony

// kopiujemy wprowadzony tekst do tablicy o nazwie tab

char tab[txt.length()+1]; // definiujemy zmienną typu char, która oznaczać będzie poszczególny znak tekstu
strcpy(tab, txt.c_str()); // kopiowanie tesktu do tablicy

// do zamiany małych liter na duże oraz implementacji szyfru ROT13 wykorzystujemy pętle for

cout << "Zaszyfrowany teskt: ";

for(int i=0;i<txt.length();i++){ 
  tab[i]=(char) toupper(tab[i]); // dla każdego elementu z tablicy funcja toupper zwraca znak zamieniony z małej litery na dużą 
 
 // przechodzimy do etapu zamiany liter zgodnie ze wzorcem szyfru ROT13
 // zgodnie z tablicą ASCII litery od A do M mają wartości: 65-77, od N do Z: 78-90
 // w zależności w której grupie znajduje się litera, po zaszyfrowaniu przesunie się ona o 13 znaków
   
  if(tab[i]>77){ 
    cout << (char)(tab[i]-13); // dla liter, które w tablicy ASCII mają wartość większą od 77, odejmij 13 i wyświetl zaszyfrowany tekst
    } 
  else{  
    cout << (char)(tab[i]+13); // dla liter, które w tablicy ASCII mają wartość mniejszą od 77, dodaj 13 i wyświetl zaszyfrowany tekst
    }
  } 

  cout << endl; 

  return 0;

}

/* Dobrze wykonane zadanie. Plusy za szczegółowe komenatrze.

Co można by poprawić?
1. Program działa zarówno dla małych liter jak i dużych wprowadzonych przez użytkownika, więc można usunąć komunikat
mówiący o tym, że ma być wprowadzony tekst z małych liter.
Przykładowy output:
Wprowadz teskt, uzywajac malych liter: HeLlO
Zaszyfrowany teskt: URYYB

2. Użytkownik powinien mieć możliwość wprowadzenia więcej niż jednego słowa.

3. Może lepiej było zamiast definiować zmienną string txt, a potem kopiować ją do tablicy typu char, od razu wpisywać do tablicy
typu char łańcuch znaków wprowadzonych przez użytkownika? Zmniejszyłoby to rozmiar zuużytej pamięci.

Podsumowując zadanie uznaję za zaliczone, ale można je jeszcze dopracować. */
