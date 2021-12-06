//Liczby losowe z zakresu (-10, 50)
//Nie wykonałem trzeciej częśći zadania z zastępywaniem sąsiądów, ponieważ nie zrozumiałem o co chodzi.
#include <iostream>
#include <cstdlib>

using namespace std;

int getRandom()
{
    int a = (rand() % 60) - 10;
    return a;
}

int main()
{
    int tablica[50];
    int ujemne = 0;
    int podzielne3 = 0;
    for (int i = 0; i < 50; i++)
    {
        tablica[i] = getRandom();
        if(tablica[i] % 3 == 0)
        {
            podzielne3++;
        }
        if(tablica[i] < 0)
        {
            ujemne++;
        }
        cout << i << " Liczba: " << tablica[i] << " Liczb ujemnych: " << ujemne << " Podzielnych przez 3: " << podzielne3 << endl;
    }
}
