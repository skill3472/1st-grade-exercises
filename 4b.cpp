#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,y;
    cin >> x;
    if (x < 1)
    {
        y = x * 2;
    } else if (x == 2)
    {
        y = pow(x-1, 4);
    } else if (x == 6)
    {
        if(x+2 < 0)
        {
            y = pow((x+2), (1/3)) * (-1);
        } else
        {
            y = pow((x+2), (1/3));
        }
    } else
    {
        y = 0;
    }

    cout << endl << y;
}
