#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l1, l2, m1, m2, wynikL, wynikM;
    string y;
    float wynik, liczba1, liczba2;
    cout << "Podaj licznik i mianownik\n";
    cin >> l1;
    cout << endl << "-----" << endl;
    cin >> m1;
    cout << "\nPodaj drugi licznik i mianownik\n";
    cin >> l2;
    cout << endl << "-----" << endl;
    cin >> m2;
    cout << "Jakie dzialanie chcesz wykonac? \n(1) Dodawanie \n(2) Odejmowanie \n(3) Mnozenie \n(4) Dzielenie" << endl;
    cin >> y;

    liczba1 = l1/m1;
    liczba2 = l2/m2;

    if(y == "1") wynik = liczba1 + liczba2;
    else if(y == "2") wynik = liczba1 - liczba2;
    else if(y == "3") wynik = liczba1 * liczba2;
    else if(y == "4") wynik = liczba1 / liczba2;

    wynik = (round(wynik*100))/100;

    wynikL = wynik*100;
    wynikM = 100;

    while (wynikL%2==0 && wynikM%2==0)
    {
        wynikL = wynikL/2;
        wynikM = wynikM/2;
    }
    while (wynikL%3==0 && wynikM%3==0)
    {
        wynikL = wynikL/3;
        wynikM = wynikM/3;
    }
    while (wynikL%5==0 && wynikM%5==0)
    {
        wynikL = wynikL/5;
        wynikM = wynikM/5;
    }

    cout << "Wynik to \n" << wynikL << endl << "-----" << endl << wynikM;

}
