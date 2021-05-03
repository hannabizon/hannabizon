//wyświetl na 2 sposoby tabliczkę mnożenia od 1 do 100: 1)pętla for 2) tablica 
//ustaw szerokość odstępu cout <<setw(4) z biblioteką <iomanip>
//w rezultacie otrzymamy tablicę dwuwymiarową 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int tab[10][10]; //definiujemy tablicę dwuwymiarową[wiersze][kolumny] 10x10 - tab przechowuje 100 elementów
for (int i=1; i <= 10; i++){ //literujemy najpierw kolumny [i], później wiersze [j]
	for (int j=1; j <= 10; j++){
		tab[i-1][j-1]=i*j; //-1 bo zaczynamy od tab[0]; mnożymy bo 2*2 ma dać 4 etc.
	
		cout << setw(4);
		cout << tab[i-1][j-1];
	}
	cout << endl;
}

//drugi sposób wyświetlenia:


    return 0;

}