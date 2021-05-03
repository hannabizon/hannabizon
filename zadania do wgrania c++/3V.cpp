//zdefiniuj 5 elementową tab, elementy wprowadza user
//oblicz średnią arytmetyczną tych elementów


#include <iostream>
using namespace std;

int main(){

int tab[5];
cout << "Wprowadz 5 liczb calkowitych: " << endl;
cin >> tab[0] >> tab[1] >> tab[2] >> tab[3] >> tab[4];
    
cout << " " << endl;

int suma=0;
for(int i=0 ; i<5; i++){
suma=suma+tab[i]; // do sumy będziemy dodawać wartość elementu tablicy 
cout << tab[i] << " " << endl; 
}
cout << " " << endl;
//średnia arytmetyczna = suma/elementów
cout << "Srednia arytmetyczna wynosi: " << suma/5.0 << endl;
cout << " " << endl;
   
    return 0;
}