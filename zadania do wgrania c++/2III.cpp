#include <iostream>
#include <cmath>
using namespace std;
int main()
{

int x;

    cout << "Podaj wartość liczby całkowitej: " << endl;
    cin >> x;

if(x%2==0) {
    cout << x << " jest liczbą parzystą" << endl;
} 
else {
    cout << x << " jest liczbą nieparzystą." << endl;
}

    return 0;
}