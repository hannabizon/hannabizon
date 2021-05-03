#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int length;
int unit;

cout << "Podaj długość: " << endl;
cin >> length;
if(length<0){
    cout << "Długość musi być większa od 0" << endl;
}
else{
cout << "Podaj jednostkę: 0-mm 1-cm 2-m " << endl;
cin >> unit;

switch(unit){

    case 0: 
    cout << length << " mm " << length*0.1 << " cm " << length*0.001 << " m " << endl;
    break;
    case 1:
    cout << length << " cm " << length*10 << " mm " << length*0.01 << " m " << endl;
    break;
    case 2:
    cout << length << " m " << length*100 << " cm " << length*1000 << " mm " << endl;
    break;
    default: 
    cout << "Podałeś złą wartość/Wynik nieprawidłowy" << endl;
    break;

}
}
    return 0;
}