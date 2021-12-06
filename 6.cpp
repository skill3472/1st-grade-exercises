#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,ob,p,s;

    cout << "Podaj a, b i c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    ob = a + b + c;
    p = ob / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << endl << "Obwod tego trojkata to: " << ob << " , a jego pole to " << s;
}
