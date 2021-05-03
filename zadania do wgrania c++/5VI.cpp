//to samo co w zad.4 tylko przy użyciu tablicy, metoda iteracyjna

#include <iostream>
using namespace std;

double factorial_rec(int);

int main()
{
cout << "Podaj numer wyrazu ciagu Fibonacciego do obliczenia: ";
int n;
cin >> n; //wyraz ciągu Fibonacciego
    if (n<0){
    cout << "Blad - liczba musi byc wyzsza lub rowna 0." << endl;}
    cout << n << " wyraz ciągu = " << factorial_rec(n) << endl; 
return 0;
}

double factorial_rec(int n)
{
int i, tab[n];
    tab[0]=0;
    tab[1]=1;
for (i=2;i<n;i++)
tab[i]=tab[i-1]+tab[i-2];
return tab[n-1];
}