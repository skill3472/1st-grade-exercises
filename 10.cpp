#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float suma, k;

    for (int i = 0; i < 11; i++) {
        k = i + 5;
        suma += pow(20, 1/3) / (2 * k);
    }

    cout << suma;
}
