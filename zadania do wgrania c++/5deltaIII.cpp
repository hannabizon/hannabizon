#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double a, b, c;   
 double delta;

 cout << "Program oblicza rozwiazanie rownania kwadratowego ax^2 + bx + c = 0" << endl; 
 cout << "Wprowadź współczynniki a b c:" << endl;
 cin >> a >> b >> c;
 cout <<"a = " << a << " b = " << b << " c = " << c << endl;

 if (a!=0) //wartość a musi być różna od 0! jeśli a=0 to nie jest równanie kwadratowe, nie robię dalej nic
 {
     delta = b*b-4*a*c; // wzór na deltę
     cout << "delta = " << delta << endl;

     if (delta>=0) // ten if wykona się tylko dla d>=0 dlatego if(d<0) jest poza nim
     {
         double x1, x2; // x1 i x2 oznaczaja rozwiazanie rownania
         x1=(-b-sqrt(delta))/(2*a); //x1=(-b-sqrt(delta))/(2*a) - ok (wzór na x1 i x2)
         x2=(-b+sqrt(delta))/(2*a); //x2=(-b-sqrt(delta))/(2*a) - ok

         if (delta==0) // mamy 1 rozwiązanie
         {
             cout << "Równanie kwadratowe ma 1 rozwiązanie " << endl;
             cout << "x1 = x2 = " << x1 << endl;
         }

        else {
            cout << "Równanie kwadratowe ma 2 rozwiązania " << endl; // jesli delta > 0 mamy 2 rozwiazania
            cout << "x1 = " << x1 << " x2 = " << x2 << endl;
        }
     }  

     if (delta<0) // brak rozwiazania
     {
        cout << "Równanie kwadratowe nie ma rozwiązania" << endl;
     }
 }
    return 0;
}