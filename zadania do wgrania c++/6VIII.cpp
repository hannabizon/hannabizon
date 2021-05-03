//stwórz f.która będzię mnożyć 2 argumenty, chcąc przekazać 3 argument do tej f.który jest wynikiem mnożenia
//argumenty mamy przekazać na 3 sposoby: 1)przez wartość 2)referencję 3)wskaźnik
//zmienne pierwsze przypisane nie zmieniają się, 3 elem. mają być zmodyfikowane

#include <iostream>
using namespace std; // def. 3 funkcje, które mnożą parametry, przyjmują 3 wartości
int mnozenie(int, int, int); //1) przekazuje argument do funkcji przez wartość
void mnozenie2(int, int, int &); // 2) przekazuje argument do funkcji przez referencję
void mnozenie3(int, int, int *); // 3) przekazuje argument do funkcji przez wskaźnik
int main()
{
    int a = 10;    int b = 20;    int c = 0; // def. 3 zmienne, c to wynik mnożenia
    mnozenie(a, b, c);
    cout << "a=" << a << ", b=" << b << ", c=" << mnozenie(a,b,c) << endl; // wywołuję f.nr1
    c = 0; // kolejny krok zeruję c, aby mieć wartość początkową
    mnozenie2(a, b, c); // przekazuję c przez referencję. Referencję def. w funkcji, nie tutaj
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl; // wywołuję funkcję
    c = 0;
    int *wsk_c = &c; // funkcja nr3 wskaźnik definiuje wsk. na zmienną c i adres
    mnozenie3(a, b, wsk_c); // wywołuję funkcję bez podawania c, a wskazując na wskaźnik
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
    
}
// DEFINICJA FUNKCJI:
int mnozenie(int x, int y, int m) // kalsyczna funkcja m= wynik mnożenia 2 argumentów
{
    m = x * y;
    return m;
}
void mnozenie2(int x, int y, int &m) // funkcja nr2 referencja.  &m - referencja
{                               // zmienia argument m, przypisując wartość = x*y
    m = x * y;
}                                       // funkcja nr3
void mnozenie3(int x, int y, int *m) // *m - wskaźnik
{
    *m = x * y;
}