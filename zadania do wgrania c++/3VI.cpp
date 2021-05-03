//algorytm Euklidesa metoda iteracyjna (za pomocą pętli)
//konieczne użycie diagramu blokowego z modulo division
//napisz f.która znajdzie największy wspólny dzielnik 2 liczb większych od 0

#include <iostream>
using namespace std;
 
int gcd(int,int); // GCD=największy wspólny dzielnik 1.DEKLARACJA FUNKCJI
 
int main()
{
    int a, b;
    cout << "Podaj liczbe a = ";
    cin >> a;
    cout << "Podaj liczbe b = ";
    cin >> b;
 
    if (a<0 || b<0)
    {
       cout << "Blad - podane liczby musza być wieksze od 0." << endl; 
    }
    else
    {
        cout << "GCD = " << gcd(a,b) << endl; // 3.WYWOŁANIE FUNKCJI
    }
 
    return 0;
}
 
int gcd(int a, int b) // 2.DEFININICJA FUNKCJI
{
    while (a!=0 && b!=0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }
    return a+b; //return zwraca GCD
}