//Wieże Hanoi

#include <iostream>

using namespace std;

void przeniesKlocek(int p, int q)
{
    const char palik[] = { '1', '2', '3' };
    cout << "Przenies z palika " <<palik[p] << " na palik " << palik[q] << endl;
}

void hanoi(int n, int a, int b, int c)
{
    if (n > 1) hanoi(n - 1, a, c, b);
    przeniesKlocek(a, c);
    if (n > 1) hanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    cout << "Wieże Hanoi\n-----------\nPodaj liczbę krążków: ";
    cin >> n;
    if (n > 0)
        hanoi(n, 0, 1, 2);
    else
        cout << "Ilość krążków nieprawidłowa.\n";
    return 0;
}
