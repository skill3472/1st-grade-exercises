#include <iostream>

using namespace std;

int main()
{
    string wybor;
    int n;
    float x;
    cout << "Wybierz ciag: \n(1) 12, 9, 6, 3, 0, -3 \n(2) 3, -6, 12, -24, 48, -96 \n(3) -300, -30, -3, -0.3, -0.03, -0.003\n";
    cin >> wybor;
    cout << "\nPodaj n: ";
    cin >> n;
    cout << endl;

    if(wybor=="1")
    {
        x = 12;
        for (int i = 0; i < n; i++) {
            cout << x << endl;
            x -= 3;
        }
    }
    else if(wybor=="2")
    {
        x = 3;
        for (int i = 0; i < n; i++) {
            cout << x << endl;
            x *= -2;
        }
    }
    else if(wybor=="3")
    {
        x = -300;
        for (int i = 0; i < n; i++) {
            cout << x << endl;
            i = i / 10;
        }
    }
}
