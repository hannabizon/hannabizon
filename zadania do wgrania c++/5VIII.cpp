//zdef,10-elem.tab.
//za pomocą pętli for wyświetl elem. tablicy ze wskaźnikami i adresem każdego elementu

#include <iostream>
using namespace std;
int main() {
int tab[10]={0,1,2,3,4,5,6,7,8,9};

for (int i=0; i<10; i++) {
    cout << "tab[" << i << "] = " << *(tab+i) << "\t address: " << tab + i << endl;
}
return 0;
}