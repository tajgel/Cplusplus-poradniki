#include <iostream>
using namespace std;

int main(){
    string haslo = "";
    while(haslo != "1234"){
        cout << "Wpisz hasło: ";
        cin >> haslo;
    }
    cout << "Brawo odgadłeś hasło";
    return 0;
}