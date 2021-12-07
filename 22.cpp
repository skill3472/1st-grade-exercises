#include <iostream>

using namespace std;

int main()
{
    int height = 3;
    int width = 6;

    int tabela[width][height];
    int save[height];

    cout << "Pierwsza tabela: " << endl;

    for (int i2 = 0; i2 < height; i2++)
    {
        cout << endl;
        for (int i = 0; i < width; i++)
        {
            tabela[i][i2] = i+i2;
            cout << tabela[i][i2] << " | ";
        }
    }

    for (int i = 0; i < height; i++) {
        save[i] = tabela[2][i];
        tabela[2][i] = tabela[4][i];
        tabela[4][i] = save[i];
    }

    cout << "\nDruga tabela: " << endl;
    for (int i2 = 0; i2 < height; i2++)
    {
        cout << endl;
        for (int i = 0; i < width; i++)
        {
            cout << tabela[i][i2] << " | ";
        }
    }
}
