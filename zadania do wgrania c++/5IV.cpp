#include <iostream>
using namespace std;

int main()
{
    int liczba;

    cout << "Enter number: ";
    cin >> liczba;
    
    int reverse; // zmienna liczba odwrócona
    while (liczba) {
		reverse = 10*reverse + liczba%10;
		liczba = liczba/10; // inaczej liczba /= 10
	}
    cout << "Reverse number: " << reverse << endl;
    
	return 0;
	
}
