#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int potega;   
    int i=2;
    
    /*cout << "Potega liczby 2 to" << endl;
        potega=pow(2,0);
    cout << "2 do potegi 0 wynosi: "  << potega << endl;
    potega=pow(2,1);
    cout << "2 do potegi 1 wynosi: "  << potega << endl;
    potega=pow(2,2);
    cout << "2 do potegi 2 wynosi: "  << potega << endl;
    */

    for (int i=0; i<=16; i++) { 
    // od jakiej wartości zaczynamy, do kiedy warunek się spełnia, co się dziej z i)
    potega=pow(2,i); // funkcja - (co do potęgi, do której)
    cout << "2 do potegi " << i << " wynosi "  << potega << endl;
    }
    
    return 0;
}