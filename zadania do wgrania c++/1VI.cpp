//napisz funkcję hello, która wyświetli wskazany napis 

#include <iostream>
using namespace std;

void hello(); // 1.deklaracja funkcji

int main(){

hello(); // 3.wywołanie funkcji

return 0;
}
   void hello() {
      cout << "Hello! This is my first function!" << endl; //2.definicja funkcji (co ma robić?)
}