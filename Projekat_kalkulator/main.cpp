#include <iostream>
using namespace std;

void prikazMenija(){
    cout << "\n1. Sabiranje" << endl;
    cout << "2. Oduzimanje" << endl;
    cout << "3. Mnozenje" << endl;
    cout << "4. Deljenje" << endl;
}

int izborOpcije(){
    cout << "\nOdaberite zeljenu opciju: " ;
    int x;
    cin >> x;
    return x;
}

double sabiranje(double x, double y){
    double
    rez = 0;
    cout << "\nUnesite x: " ;
    cin >> x;
    cout << "\nUnesite y: " ;
    cin >> y;
    rez = x + y;
    return rez;
}

double oduzimanje(double x, double y){
    double
    rez = 0;
    cout << "\nUnesite x: " ;
    cin >> x;
    cout << "\nUnesite y: " ;
    cin >> y;
    rez = x - y;
    return rez;
}

double mnozenje(double x, double y){
    double
    rez = 1;
    cout << "\nUnesite x: " ;
    cin >> x;
    cout << "\nUnesite y: " ;
    cin >> y;
    rez = x * y;
    return rez;
}

double deljenje(double x, double y){
    double
    rez = 1;
    cout << "\nUnesite x: " ;
    cin >> x;
    cout << "\nUnesite y: " ;
    cin >> y;
    rez = x / y;
    return rez;
}

//----------------------------------------------------------------------------------------------------------------------------
int main()
{
    cout << "-------------------------------------------------------------" << endl;
    cout << "\n************************ KALKULATOR ************************" << endl << endl;
    char odg;
    do
    {
    prikazMenija();
    int izbor = izborOpcije();
    double x=0, y=0;
    switch (izbor)
    {
    case 1:
        cout << "\nSabiranje ... " << endl;
        cout << "\nRezultat sabiranja je: R = " <<  sabiranje(x, y) << endl;
        break;
    case 2:
        cout << "\nOduzimanje ... " << endl;
        cout << "\nRezultat oduzimanja je: R = " <<  oduzimanje(x, y) << endl;
        break;
    case 3:
        cout << "\nMnozenje ... " << endl;
        cout << "\nRezultat mnozenja je: R = " <<  mnozenje(x, y) << endl;
        break;
    case 4:
        cout << "\nDeljenje ... " << endl;
        cout << "\nRezultat deljenja je: R = " <<  deljenje(x, y) << endl;
        break;
    default:
        cout << "\nIzabrali ste nepostojecu opciju!" << endl;
    }
    cout << "\nZelite li da ponovite unos? [d/n]: ";
    cin >> odg;
    }while(odg == 'd' || odg == 'D');
    cout << "\nKraj programa!" << endl;
    cout << "\n-------------------------------------------------------------" << endl;
    return 0;
}
