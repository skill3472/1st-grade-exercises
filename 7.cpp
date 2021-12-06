#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    for (int i = 99; i > 9; i--) {
        if(i % 2 == 0 && i % 3 != 0)
        {
            cout << i << endl;
            a++;
        }
    }
    cout << "Liczb bylo: " << a;
}
