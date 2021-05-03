//program wypełnia tab 10 losowymi elementami z zakresu 1-10
//jeśli trafi się 7 wyświetl komunikat: "Wygrałeś!"

#include <iostream> 
#include <iomanip> //dodatkowa biblioteka
using namespace std; 

void generator(int[], int);
void print(int[], int);

int main()  
{
int n=10; //elementy tablicy
int tab[n];
generator(tab, n);
print(tab, n); //  tablica wypełniona 10 elementami
for (int i=0; i<n; i++)
{
    if (tab[i]==7) //warunek
    {
        cout << setw(4) << tab[i]; //wywołanie funkcji print
        cout << " Wygrales, jest 7!" << endl; 

    }
}
cout << endl;
return 0;
}

void generator (int t[], int x)
{
    srand(time(0));
    for (int i=0; i<x; i++)
    {
        t[i]= rand()%11; //tablica zawiera losowe liczby z zakresu 1-10
    }
} //brak return, ta funkcja nic nie zwraca

void print (int t[], int y)
{
    for (int i=0; i<y; i++)
    {
        cout << setw(4) << t[i];
    }
    cout << endl;
}