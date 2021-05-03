#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Podaj długości 3 boków: a,b,c" << endl;
    cin >> a >> b >> c;
    if(a>=0 && b>=0 && c>=0) {


    if(a + b > c && b + c > a && c + a > b){
        cout << "Z podanych liczb udało się zbudować trójkąt" << endl;
    }
    else{
        cout << "Z podanych liczb nie udało się zbudować trójkąta" << endl;

    }
        
    }
    
    else{
        cout << "a, b, c muszą być większe od 0" << endl;
    }
    return 0;
}