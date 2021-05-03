#include <iostream>
using namespace std;

int main() 
{
 int p, q;  //it should be integers, not bool - ok
 cout << "Wprowadź pierwszą liczbę: " << endl; //(0 lub 1) remove it - ok
 cin >> p;
 cout << "Wprowadź drugą liczbę: " << endl; //(0 lub 1) remove it - ok
 cin >> q;
 cout << "!(p && q) == !p || !q " << (!(p && q) == (!p || !q)) << endl; 
 cout << "!(p || q) == !p && !q " << (!(p || q) == (!p && !q)) << endl;
 
    return 0;
}