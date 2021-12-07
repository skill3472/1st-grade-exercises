#include <iostream>

using namespace std;

int ciag(int n)
{
    if(n==1) return 4.5;
    else if(n>1) return 5*ciag(n-1)+3;
    else cout << "Nieprawidłowe dane wejściowe";
}

int main()
{
    int y;
    cin >> y;
    cout << ciag(y);
}
