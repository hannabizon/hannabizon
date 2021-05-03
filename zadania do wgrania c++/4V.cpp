//zdefiniuj 5 elementową tab 
//user podaje wartość przez ile trzeba te elementy pomnożyć
//wyświetlamy tablicę przed i po modyfikacji

#include <iostream>
using namespace std;

int main()
{
    int tab[5];
    cout << "Wprowadz 5 liczb calkowitych: " << endl;
    cin >> tab[0] >> tab[1] >> tab[2] >> tab[3] >> tab[4];
    cout << " " << endl;

    int mnoznik=0;
    cout << "Podaj mnoznik: " << endl;
    cin >> mnoznik;
    cout << " " << endl;

    cout << "tablica przed modyfikacja:"  << endl; 
    for(int i=0; i<5; i++){
        cout << "tab[" << i << "]= " << tab[i] << endl;}
    
    cout << " " << endl;

    cout << "tablica po modyfikacji: " << endl;    
    
    int wynik=0;
    for(int i=0; i<5; i++){
        wynik=tab[i]*mnoznik;
        cout << "tab[" << tab[i] << "] = " << wynik << endl;
    }
    return 0;
}