#include <iostream>

using namespace std;

int main()
{
    string tekst = "";
    string nowyTekst;
    string innyTekst;
    int licznikSlow;
    string slowo;
    string zdanie[100];
    int a = 0;


    cin >> tekst;

    //ZAMIANA NA '_'
    innyTekst = tekst;
    for (int i = 0; i < tekst.length(); i++) {
        if(tekst[i] == ' ')
        {
            innyTekst[i] = '_';
        }
    }
    cout << endl << innyTekst;

    //RESZTA
    for (int i = 0; i < tekst.length(); i++)
    {
        if(tekst[i] != ' ')
        {
            if(tekst[i] == 'a' || tekst[i] == 'A') a++;
            slowo += tekst[i];
        }
        else
        {
            licznikSlow++;
            zdanie[licznikSlow] = slowo;
            cout << endl << slowo;
            slowo = "";
        }
    }
    licznikSlow++;
    zdanie[licznikSlow] = slowo;
    cout << endl << slowo;
    slowo = "";

    cout << endl << "W tekscie litera A/a wystapila " << a << " razy.";
}
