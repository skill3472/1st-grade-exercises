#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i;
    cout <<
    "Podaj rodzaj rownania" << endl <<
    "(1) Liniowe" << endl <<
    "(2) Kwadratowe" << endl;
    cin>>i;
    if(i==1)
    {
        int a,b,x,y;
        cout << "Podaj wspolczynnik a: ";
        cin>>a;
        cout << endl << "Podaj wspolczynnik b: ";
        cin>>b;
        cout << endl << "Podaj wspolczynnik x: ";
        cin>>x;
        y = a*x + b;
        cout << endl << "Wynik to: " << y;
    }
    else if(i==2)
    {
        int a,b,c,x,y;
        cout << "Podaj wspolczynnik a: ";
        cin>>a;
        cout << endl << "Podaj wspolczynnik b: ";
        cin>>b;
        cout << endl << "Podaj wspolczynnik c: ";
        cin>>c;
        cout << endl << "Podaj wspolczynnik x: ";
        cin>>x;
        y = a*pow(x,2) + b*x + c;
        cout << endl << "Wynik to: " << y;
    }
}
