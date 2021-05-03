//zdefiniuj tablicę dla 5 liczb całkowitych, na 3 sposoby:
//określenie rozmiaru 5/user definiuje rozmiar/zainicjonowanie elementów

#include <iostream>
using namespace std;

int main()
{
    int tab[5]={1,2,3,4,5};
    
    for (int i=0; i<5; i++){ // pierwszy sposób
        cout << "tab[" << i << "] = " << tab[i] << endl;
        } 
    
    int n; // rozmiar tablicy     
    cout << "Wprowadz rozmiar tablicy jaka chcesz wyswietlic: ";
    cin >> n;
    
    int tab2[n]; // drugi sposób
    for (int i=0 ; i<n; i++){
        cout << "tab[" << n << "] = " << tab[i] << endl;
        }
        
    int tab3[] = {6, 10, 1, 22}; // trzeci sposób, wyświetla rozmiar i długość tablicy
         cout << "rozmiar tablicy: " << sizeof(tab3) << endl;
         cout << "dlugosc tablicy: " << sizeof(tab3)/sizeof(tab3[0]) << endl;
         
    return 0;
}