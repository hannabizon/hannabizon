// ciąg Fibonacciego, metoda: rekursywna

#include <iostream>
using namespace std;

double factorial_rec(int);

int main()
{
cout << "Podaj numer wyrazu ciagu Fibonacciego do obliczenia: ";
int n;
cin >> n;
    if (n<0){
    cout << "Blad - liczba musi byc wyzsza lub rowna 0." << endl;}
    cout << n << " wyraz ciągu= " << factorial_rec(n) << endl;
return 0;
}

double factorial_rec(int n)
{
if(n == 0) return 0;
if(n == 1) return 1;
return factorial_rec(n-1)+factorial_rec(n-2);
}