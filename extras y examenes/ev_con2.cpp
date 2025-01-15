#include <iostream>
using namespace std;
main(){
    int num;
    bool s=true;
    cout << "Ingrese un valor: ";
    cin >> num;
    /*if (num!=0){
        cout << s;
    } else{
        s = false;
        cout << s;
    }*/
(num != 0) ? cout << s :: (num = 0) cout << s=false ;
}