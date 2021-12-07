#include <iostream>
#include <cmath>

using namespace std;

int ciag1(int n)
{
    if(n<1) cout << "Blad! Podaj wyzsza wartosc.";
    else if(n==1) return 12;
    else if(n==2) return 15;
    else return ciag1(n - 1) + 3;
}

int ciag2(int n)
{
    if(n<1) cout << "Blad! Podaj wyzsza wartosc.";
    else return (1-(2*n+1)*pow(-1, n))/4;
}

int main()
{
    int y;
    cin >> y;
    cout << "Ciag 1: " << ciag1(y) << endl;
    cout << "Ciag 2: " << ciag2(y);
}
