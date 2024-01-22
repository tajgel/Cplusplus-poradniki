#include <iostream>
using namespace std;

int main(){
    string wiek;
    string name;
    cout << "Podaj ile masz lat";
    cin >> wiek;
    cout << "Podaj jak masz na imie";
    cin >> name;
    cout << "Cześć " + name + ". Masz " + wiek + "lat";
    return 0;
}