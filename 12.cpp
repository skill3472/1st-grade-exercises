#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if(n<0) cout << "Incorrect input";
    else if(n==0) return 0;
    else if(n==1) return 1;
    else return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int input;
    cout << "Ktora liczbe z ciagu Fibonacciego chcesz znac?" << endl;
    cin >> input;
    cout << Fibonacci(input);
}