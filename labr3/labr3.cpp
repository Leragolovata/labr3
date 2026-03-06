

#include <iostream>
using namespace std;

int main()
{
    const int n = 4;
    double a[n][n];

    int positive = 0;
    int negative = 0;
    int zero = 0;

    cout << "Enter matrix elements 4x4:\n";

    // Введення матриці
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Підрахунок елементів
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > 0)
                positive++;
            else if (a[i][j] < 0)
                negative++;
            else
                zero++;
        }
    }

    // Виведення результатів
    cout << "Positive elements: " << positive << endl;
    cout << "Negative elements: " << negative << endl;
    cout << "Zero elements: " << zero << endl;

    return 0;
}