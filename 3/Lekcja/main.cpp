#include <iostream>
using namespace std;

int main(){
    string wyraz;
    int ileWyrazow;

    cout << "podaj wyraz: ";
    cin >> wyraz;
    cout << "podaj ile razy mam go wypisac: ";
    cin >> ileWyrazow;

    for(int i = 0; i <= ileWyrazow; i++){
        cout << wyraz;
    }


    return 0;
}