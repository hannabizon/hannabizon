#include <iostream>
using namespace std;

int main()
{

 int x, y;

 cout << "Podaj wartość 2 liczb całkowitych: " << endl;
 cin >> x;
 cin >> y; 

 if(x<y) {
 cout << x << " jest mniejszy niz " << y << endl;
 }
 else if(x>y) {
 cout << x << " jest większy niz " << y << endl;
 }
 else {
 cout << x << " jest równe " << y << endl;    
 }

    return 0;
}