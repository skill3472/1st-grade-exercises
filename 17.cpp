#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    float y;

    cin>>x;

    switch (x)
    {
        case 1:
            y = 2*x;
            break;
        case 2:
            y = pow((x-1),4);
            break;
        case 6:
            if(x+2 < 0)
            {
                y = pow((x+2), (1/3)) * (-1);
            }
            else
            {
                y = pow((x+2), (1/3));
            }
            break;
        default:
            y = 0;
    }
    cout << endl << "Wynik to: " << y;
}
