//zadanie na 2 liczbach AND / OR / XOR > tworzymy 3 funkcje. Pytamy o 2 liczby, które zamieniamy na systtem binarny.
//pytamy usera co chce zrobić: 1 - AND 2 - OR 3 - XOR

#include <iostream>
#include <string>
using namespace std;

void dec_to_bin(int);

int main () {
cout << "Enter the first decimal system: ";
int dec;
cin >> dec;
cout << "Its binary binary form is: ";
dec_to_bin(dec);
cout << "Enter the second decimal system: ";
int dec2;
cin >> dec2;
cout << "Its binary binary form is: ";
dec_to_bin(dec2);
cout << "What kind of bitwise operation do you want to perform on these numbers? " << endl;
cout << "1 - AND 2 - OR 3 - XOR " <<endl;
return 0;
}

void dec_to_bin (int m) {
    string result;
    while(m) { // m !=0
        if (m%2==0)
        result += "0";
        else
        result += "1";
        m = m/2;
    }
    int len = result.length();
    for (int i = len - 1; i >=0 ; i--) {
        cout << result[i];
    }
    cout << endl;
}