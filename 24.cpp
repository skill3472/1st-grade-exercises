#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst = "przykladowy tekst raz dwa trzy parapet";
    string slowo;
    int licznikSlow = 0;
    string zdanie[100];

    for (int i = 0; i < tekst.length(); i++)
    {
        if(tekst[i] != ' ')
        {
            slowo += tekst[i];
        }
        else
        {
            licznikSlow++;
            zdanie[licznikSlow] = slowo;
            if(slowo[0] == 'p' && slowo.length() % 2 != 0) cout << endl << slowo;
            slowo = "";
        }
    }
    licznikSlow++;
    zdanie[licznikSlow] = slowo;
    cout << endl << slowo;
    slowo = "";
}
