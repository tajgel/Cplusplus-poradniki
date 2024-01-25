#include <iostream>
using namespace std;
int main(){
    int age;
    string name;
    string answer;
    cout << "podaj swoję imię: ";
    cin >> name;
    cout << "Podaj swój wiek: ";
    cin >> age;
    if(age < 18){
        answer = "Jesteś niepełnoletni";
    }
    else if(age >= 18){
        answer = "Jesteś pełnoletni";
    }
    else{
        answer = "coś nie działa";
    }

    cout << "Witaj " << name << " " << answer;


    return 0;
}