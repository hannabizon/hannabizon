//zdefiniuj tab 4 elementową, wypełnioną imionami (string) 
//wyświetl wszystkie elementy

#include <iostream>
using namespace std;

int main(){

 string imie[4]={"Hanna", "Aleksandra", "Roksana", "Ilona"}; //wszędzie musi być cudzysłów!

 for(int i=0; i<4; i++)
     cout << "imie[" << i << "]=" << imie[i] << endl;

    return 0;
}