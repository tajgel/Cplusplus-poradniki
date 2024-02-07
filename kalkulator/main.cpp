#include <iostream>
using namespace std;

int main(){
    int liczba1 = 0;
    int liczba2 = 0;
    string znak;
    string stop;

    while(stop != "tak"){
        
        cout << "Jaka ma być liczba pierwsza: ";
        cin >> liczba1;
        cout << "Jakie chcesz wykonać działanie(+/-/*//): ";
        cin >> znak;
        cout << "Jaka ma być liczba druga: ";
        cin >> liczba2;
        if(znak == "+"){
        cout << liczba1 + liczba2 << endl;
        }
        if(znak == "-"){
            cout << liczba1 - liczba2 << endl;
        }
        if(znak == "*"){
            cout << liczba1 * liczba2 << endl;
        }
        if(znak == "/"){
            cout << liczba1 / liczba2 << endl;
        }
        
        cout << "Czy chcesz skończyć: ";
        cin >> stop;
    }
    


    return 0;
}