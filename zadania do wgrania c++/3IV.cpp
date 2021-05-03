#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float suma = 0; //definiujemy zmienne
	float ilosc = 0; //ilość liczb wprowadzonych przez użytkownika
	float a = 0; //liczba wprowadzona przez użytkownika
	char decyzja = 'T';

  do{
	do { 
 	cout << "Podaj ilość liczb, którą wprowadzisz: " ;
	cin >> ilosc; 
		if (ilosc<=0){
			cout << "Podaj wartość większą od 0!" << endl;
		}
	} while (ilosc<=0);
	
	suma=0;
	for (int i=0; i<ilosc; i++) {
		
		cout << "Wprowadzona liczba: ";
		cin >> a;

		suma=suma+a;
	}
	cout <<  "Srednia " <<  ilosc << " liczb wynosi: " << suma/ilosc << endl << endl << endl;
    cout << "Naciśnij T t jeśli chcesz kontynuować " << endl;
    cin >> decyzja; 
	} while (decyzja == 'T' || decyzja == 't');
    
return 0;	

}
