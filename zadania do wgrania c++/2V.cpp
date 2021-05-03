//zdefiniuj tab 10-elementową typu całkowitego
//wyświetl 1,4,osttani element
//wyświetl wszystkie elementy na 2 sposoby: od 0-9 oraz od 9-0

#include <iostream>
using namespace std;

int main()
{
   int tab[10] = {0,1,2,3,4,5,6,7,8,9};
   cout << tab[0]  << " " << tab[3] << " " <<   tab[9] << endl; // 1 el. tab = tab[0]
   cout << " " << endl; // separator
   
   for(int i=0; i<10; i++){ //wyświetlam od 0-9
       cout << tab[i] << endl;
       }

   cout << " " << endl; // separator

   for(int i=9; i>=0; i--){ //wyświetlam od 9-0
       cout << tab[i] << endl;
       }
          
    return 0;
}