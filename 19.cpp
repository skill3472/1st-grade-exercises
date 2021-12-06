//Potegi rekurencyjnie
#include <iostream>

using namespace std;

int potega(float a, int n)
{
    if (n == 1)
        return a;
    int s = potega(a, n - 1);
    return a * s;
}


int main()
{
    float a;
    int n;
    float wynik;

    cout << "Podaj współczynnik a (a€R): ";
    cin >> a;
    cout << endl << "Podaj współczynnik n (n€N+) ";
    cin >> n;
    if(n>0)
    {
        wynik = potega(a, n);
        cout << endl << wynik;
    }
    else
    {
        cout << "Błąd! Współczynnik n musi być naturalną liczbą dodatnią";
    }
}
