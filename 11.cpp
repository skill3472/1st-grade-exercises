#include <iostream>

using namespace std;

void method1(int x)
{
    if(x % 2 == 0) // Jesli modulo z liczby podanej przez uzytkownika i 2 jest rowne 0, to liczba musi byc parzysta
    {
        cout << "Ta liczba jest parzysta";
    }
    else
    {
        cout << "Ta liczba nie jest parzysta";
    }
}

void method2(int x)
{
    if(x & 0) //Operator & porownuje ze soba wartosc bitowa dwoch liczb i generuje liczbe binarna z tych ktore sie pokrywaja. Z liczby 1, jedyne mozliwe wyniki to 1 i 0, wiec mozna odpuscic operator porownujacy wynik z inna wartoscia. Liczby z 0 w ostatnim bicie sa parzyste.
    {
        cout << "Ta liczba jest parzysta";
    }
    else
    {
        cout << "Ta liczba nie jest parzysta";
    }
}

void method3(int x)
{
    if(((int)x/2)*2==x) // Liczby podzielone bez reszty przez 2 i pomnozone razy 2 ktore sa parzyste, wyjda takie same, natomiast te nieparzyste wyjda z tego dzialania zmienione.
    {
        cout << "Ta liczba jest parzysta";
    }
    else
    {
        cout << "Ta liczba nie jest parzysta";
    }
}

int main()
{
    int a;
    string wybor;

    cout << "Wybierz metode: \n(1) MODUL \n(2) BITY \n(3) DZIELENIE BEZ RESZTY\n";
    cin >> wybor;
    cout << "Podaj liczbe: \n";
    cin >> a;
    if(wybor == "1") method1((int)a);
    else if(wybor == "2") method2((int)a);
    else if(wybor == "3") method3((int)a);
}
