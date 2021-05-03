#include <iostream>
#include <string>
using namespace std;

int main()
{

string pin;
int licznik = 4; //liczba pozostałych prób 

do{ 
cout << "Podaj pin: ";
cin >> pin;

    if(pin != "1234"){  
    cout << "Wprowadź ponownie pin, pozostało prób: " << licznik <<  endl;
    licznik = licznik -1; // po każdym wprowadzeniu odejmujemy 1
    } 
    else {
    cout << "Pin prawidłowy" << endl;
    break;
    }

} while (pin != "1234" && licznik != -1); // 2 stringi z lewej strony

return 0;
}