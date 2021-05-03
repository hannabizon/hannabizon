//napisz program, który wypełni tablicę 20 losowymi elementami z zakresu -10-10 rand()%20-10
//po wypełnieniu tablicy mamy wyświetlić jedynie liczby parzyste

#include <iostream> 
#include <iomanip> //dodatkowa biblioteka
using namespace std; 

void generator(int[], int);
void print(int[], int);

int main()  
{
int n=20; //elementy tablicy
int tab[n];
generator(tab, n);
print(tab, n); //  tablica wypełniona 20 elementami
cout <<"Liczby parzyste tej tablicy to: ";
for (int i=0; i<n; i++)
{
    if (tab[i]%2==0) //warunek determinujący liczbę parzystą
    {
        cout << setw(4) << tab[i]; //wywołanie funkcji print
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
        t[i]= rand()%20-10; //tablica zawiera losowe liczby z zakresu -10-10
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