//metoda rekursywna-bez użycia pętli

#include <iostream>
using namespace std;
 
int gcd(int, int);
 
int main()
{
    int a, b;
    cout << "Podaj liczbe a = ";
    cin >> a;
    cout << "Podaj liczbe b = ";
    cin >> b;
 
    if (a<0 || b<0)
    {
       cout << "Blad - podane liczby musza byc wieksze od 0." << endl; 
    }
    else
    {
        cout << "GCD = " << gcd(a,b) << endl;
    }
 
    return 0;
}
//od tego momentu zmienia się sposób rozwiązania 

int gcd(int a, int b)
{
    if (a!=0 && b!=0 ) // dlatego, że jest modulo trzeba swprawdzić czy a i b jest !=0
    {
        if(a > b)
        {
            return gcd(a%b, b); 
        }
        else if (a < b)
        {
            return gcd(a, b%a);
        }
        else 
        {
            return a; // a==b
        }
    }
    return a+b;
}