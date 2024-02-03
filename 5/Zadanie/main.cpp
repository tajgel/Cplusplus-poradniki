#include <iostream>
using namespace std;

int main(){
    int dlugoscTab;
    string odp;
    string elementyTabS;
    int elementyTabI;
    

    cout << "Podaj długość tablicy do zainicjalizjowania jej" << endl;
    cin >> dlugoscTab;
    cout << "Czy ta tablica ma zawierać liczby czy tekst(Liczby/Tekst)" << endl;
    cin >> odp;

    string TablicaS[dlugoscTab];
    int TablicaI[dlugoscTab];

    if(odp == "Tekst"){
        cout << "Podaj Tekst tablicy: ";
        cin >> elementyTabS;
        for(int i = 0; i < dlugoscTab; i++){
            TablicaS[i] = elementyTabS;
        }
        for(int i = 0; i < dlugoscTab; i++){
            cout << TablicaS[i] << endl;
        }
    }
    else if(odp == "Liczby"){
        cout << "Podaj liczby tablicy: ";
        cin >> elementyTabI;
        for(int i = 0; i < dlugoscTab; i++){
            TablicaI[i] = elementyTabI;
        }
        for(int i = 0; i < dlugoscTab; i++){
            cout << TablicaI[i] << endl;
        }
    }
    else{
        while(odp != "Tekst" || odp != "Liczby"){
            cout << "Podaj prawidłową odpowiedź(Tekst/Liczby)" << endl;
            cin >> odp;
            if(odp == "Tekst"){
                cout << "Podaj Tekst tablicy: ";
                cin >> elementyTabS;
                for(int i = 0; i < dlugoscTab; i++){
                    TablicaS[i] = elementyTabS;
                }
                for(int i = 0; i < dlugoscTab; i++){
                    cout << TablicaS[i] << endl;
                }
                break;
            }
            else if(odp == "Liczby"){
                cout << "Podaj liczby tablicy: ";
                cin >> elementyTabI;
                for(int i = 0; i < dlugoscTab; i++){
                    TablicaI[i] = elementyTabI;
                }
                for(int i = 0; i < dlugoscTab; i++){
                    cout << TablicaI[i] << endl;
                }
                break;
            }
            
        }
    }
    

     

    

    return 0;
}