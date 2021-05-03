//Znajdź min i max w tab, która ma 20 elementów wypełniona liczbami od 0-999
//napisz f(min i max), wyświetl tab oraz min i max

#include <iostream> 
using namespace std; 
int min(int[]);
int max(int[]);

int main()
{
   int tab[20];
   min(tab); //pierwsza funkcja
   max(tab); //druga funkcja
   srand (time(0)); //ziarno generatora
    for (int i =0; i<20; i++){
        tab[i] = rand()%1000; //aby wyświetlić liczby z przedziału 0-999
        printf("tab[%d] = %d \n", i, tab[i]);
    }
    cout << " " << endl;
    cout << "minimum = " << min(tab) << endl; //() bo wywyłujemy funkcje 
    cout << "maksimum = " << max(tab) << endl;
    return 0;
}
    int min (int tab[]){
    int min=tab[0]; //przypisujemy min do tablicy[0]
    for (int i=0 ; i<20; i++){
    if (min > tab[i])
        min=tab[i];
    }
    return min; //funkcja ma zwracać minimum
}

    int max (int tab[]){    
    int max=tab[0];
    for (int i=0 ; i<20; i++){
    if (max < tab[i])
        max=tab[i];
    }
    return max; //funkcja ma zwracać maksimum
}