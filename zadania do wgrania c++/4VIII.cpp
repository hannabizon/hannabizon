//wskaźnik w tablicy
//zdef. 3-elem. tab, wpisz 3 wartości dla tych elem.
//za pomocą wskaźników wyświetl te 3 wartości i ich adres, ręcznie - dla 0,1,2

#include <iostream>
using namespace std;
 
int main()
{
    int tab[3] = {6, 16, 26};
    cout << "tab[0] = " << *tab << "\t address" << tab <<endl;
    cout << "tab[1] = " << *(tab + 1) << "\t address" << tab + 1 << endl;
    cout << "tab[2] = " << *(tab + 2) << "\t address" << tab + 2 << endl;
 
    return 0;
}