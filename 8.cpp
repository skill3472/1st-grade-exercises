#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;

    for (int i = 0; i < 10; i++) {
        x = (i+1) * 5;
        cout << i+1 << "*5=" << x << endl;
    }
}
