#include <iostream>
using namespace std;
main(){
    //operadores relacionales
    int a = 5, b = 10;
    bool c = true, d = false;
    cout << boolalpha;
    /*
    cout << "a > b: " << (a>b) << endl;
    cout << "a < b: " << (a<b) << endl;
    cout << "a >= b: " << (a>=b) << endl;
    cout << "a < b: " << (a<=b) << endl;
    cout << "a == b: " << (a==b) << endl;
    cout << "a != b: " << (a!=b) << endl;
    */
    //operadores logicos
    cout << "c && d: " << (c&&d) << endl;
    cout << "c || d: " << (c||d) << endl;
    cout << "!c: " << (!c) << endl;
    cout << "!d: " << (!d) << endl;
    cout << "c && !d: " << (c&&!d) << endl;
    cout << "c || !d: " << (c||!d) << endl;
    cout << "!c && d: " << (!c&&d) << endl;
    cout << "!c || d: " << (!c||d) << endl;
}