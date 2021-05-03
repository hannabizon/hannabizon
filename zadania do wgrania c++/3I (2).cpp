#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    bool my_bool = true;
    char my_char = 'a';
    int my_int = 5;
    float my_float = -5.1;
    double my_double = 56.789;

    cout << "Data type boolean has value equals "  <<  my_bool   << " and size equals " << sizeof(my_bool) << endl;
    cout << "Data type char has value equals " << my_char << " and size equals " << sizeof(my_char) << endl;
    cout << "Data type int has value equals " << my_int << " and size equals " << sizeof(my_int) << endl;
    cout << "Data type float has value equals " << my_float << " and size equals " << sizeof(my_float) << endl;
    cout << "Data type my_double has value equals " << my_double << " and size equals " << sizeof(my_double) << endl;

return 0;

}