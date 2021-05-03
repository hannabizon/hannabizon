// wprowadź liczbę w systemie 10-tnym, zmień ją na cyfrę w systemie binarnym. Zapytaj usera co dalej chce zrobić:
// 1 - NOT 2 - >> 3 - << ; jeśli wybór = 2/3 zapytaj o ile przesunąć cyfrę?
#include <iostream>
#include <string>
using namespace std;

void dec_to_bin(unsigned int);
void choice_function (unsigned int);
void notFunction(unsigned int);
void shiftRFunction(unsigned int, unsigned int);
void shiftLFunction(unsigned int, unsigned int);

int main () {
cout << "Enter an integer in the decimal system: ";
unsigned dec;
cin >> dec;
cout << "Number in the binary system: ";
dec_to_bin(dec);
cout << "What bitwise operation do you want to perform on this number? " << endl;
cout << "1 - NOT 2 - >> 3 - << " <<endl;
int choice;
    cin >> choice;
    choice_function(choice, dec);

    return 0;
}

void dec_to_bin (unsigned int m) {
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

void choice_function(int choice, unsigned int dec){
    if(choice == 1){
        notFunction(dec);
    }
    else if(choice == 2){
        unsigned int ile;
        cout << "Podaj o ile miejsc ma zostac przesunieta liczba: ";
        cin >> ile;
        shiftRFunction(dec, ile);
       
    }
    else if{choice == 3){
        unsigned int ile;
        cout << "Podaj o ile miejsc ma zostac przesunieta liczba: ";
        cin >> ile;
        shiftLFunction(dec, ile);
        
    }
    else{
        cout << "Zly wybor" << endl;;
    }
}
void notFunction(unsigned int dec){
cout << "Wynik negacji = " << ~dec << endl;
}
void shiftRFunction(unsigned int dec, unsigned int ile)
{
cout << "Wynik przesuniecia bitowego w prawo  = " << (dec>>ile) << endl;

}
void shiftLFunction(unsigned int dec, unsigned int ile)
{
    cout << "Wynik przesuniecia bitowego w lewo  = " << (dec<<ile) << endl;

}