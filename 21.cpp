//Najmniejszy numer tablicy
#include <iostream>
#include <cstdlib>

using namespace std;

int getRandom()
{
    int a = rand() % 100;
    return a;
}

int main()
{
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    int tablica[n];
    int smallIndeks = 0;

    for (int i = 0; i < n; i++)
    {
        tablica[i] = getRandom();
    }

    for (int i = 0; i < n; i++)
    {
        if(tablica[i] < tablica[smallIndeks])
        {
            smallIndeks = i;
        }
    }

    cout << "Najmniejszy numer w tablicy to: " << tablica[smallIndeks] << " o pozycji " << smallIndeks;
}
