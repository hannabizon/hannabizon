//szukamy mediany, rozmiar tab definiuje user. Tab jest wypełniona l.z zakresu: 0-99
//mediana: sortujemy tab (dowolny algorytm sortujący), znajdujemy wartość środkową
//jeśli n=l.nieparzysta mamy wartość środkową | n=l.parzysta liczymy śr.arytmetyczna środkowych wyrazów 

#include <iostream> 
#include <iomanip>
using namespace std;

void bubble(int[], int);    //2 ETAP sortowanie

int main()
{
    int n; // liczba elementów tablicy
    cout << "Podaj z ilu elementow ma sie skladac tablica: " << endl;
    cin >> n; 
    int tab[n]; // deklaruję tablicę
    
    srand(time(0));            //1 ETAP uzupełniam tablcę
    for(int i=0; i<n; i++){  //uzupełniam tablicę funkcją for 
    tab[i]=rand()%100; 
    /*printf("tab [%d] = %d \n", i , tab[i]); //wyświetlam tablicę -> niepotrzebne? */ 
    }   
    bubble(tab, n);// wowołujemy funkcję bubble, przyjmuje 2 argumenty - przekazujemy tablicę i n
    
    for(int i=0; i<n; i++){  //uzupełniam tablicę funkcją for 
    printf("tab [%d] = %d \n", i , tab[i]); //wyświetlam tablicę
    }   
    
    float mediana; //4.ETAP MEDIANA
    if(n%2==0){ //w przypadku l. parzystych mediana to śr. arytmetyczna 2 środkowych wyrazów
        mediana=(tab[n/2]+tab[n/2-1])/2.0;//wyciągamy elementy z tablicy np. 6 el --> 6/2 w 3 + drugi element 
    }
    else{ //w przeciwnym przypadku
        mediana=tab[n/2];
    }
    cout << "Mediana wynosi: " << mediana << endl;

    return 0;
}
void bubble(int t[], int m) { //3. ETAP co funkcja ma robić
int a;
for (int i=1; i<=m; i++) {
/*cout << i << "iteration" << endl;*/
for (int j=0; j<m-i; j++) {
if (t[j] > t[j +1]){
/*printf("Changing %d and %d in %d iteration\n", t[j], t[j+1], j);*/
a=t[j];
t[j]=t[j+1];
t[j+1]=a;
}
}
}
}