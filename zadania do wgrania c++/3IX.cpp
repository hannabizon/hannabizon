//Zlicz ilość włączonych bitów (czyli 1) trzeba zamienić system dziesiętny na binarny i policzyć ilośc jedynek

#include <iostream>
#include <string>
using namespace std;

void dec_to_bin(int);

int main () {
cout << "Enter an integer number: ";
int dec;
cin >> dec;
cout << "Number in the binary system: ";
dec_to_bin(dec);
cout << "Number of set bits: ";
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