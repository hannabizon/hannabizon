#include <iostream>
#include <string>
using namespace std;

 int main () {

  int index_number;
  int term;
  string first_name;
  string last_name;
  string field_of_study;

 cout << "What is your first name?" << endl;
 cin >> first_name;
 cout << "What is your last name?"<< endl;
 cin >> last_name;
 cout << "What is your index number?" << endl;
 cin >> index_number;
 cout << "What term are you on?" << endl;
 cin >> term;
 getchar(); // aby wczytac dwuczlonowa nazwe 
 cout << "What is your field of study?" << endl;
 getline(cin, field_of_study); // aby wczytac dwuczlonowa nazwe 
 
 cout << "Hi " << first_name << " " << last_name << "! " << "Your index number is " << index_number << "." << endl;
 cout << "You are on" << " " << term << " term on " << field_of_study << "." << endl;

    return 0;
}