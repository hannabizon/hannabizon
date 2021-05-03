#include <iostream>

using namespace std;

int main()
{

    int liczba;

    cout << "Wprowadź liczbę: ";
    cin >> liczba;
    
	int reverse;
    while (liczba) {
		reverse = 10 * reverse + liczba % 10;
		liczba /= 10;
	}
    cout << "Reverse number: " << reverse << endl;
	
	cout << "Liczba wspak: ";
    for(int modulo = 10; ; modulo=modulo*10){ 
        cout << (liczba%modulo - liczba%modulo/10)/(modulo/10);
        if (liczba%modulo == liczba) {
            break;
        } 
    } cout << endl;



return 0;
}