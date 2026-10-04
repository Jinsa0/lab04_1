// LR 4.1.cpp
// Кіц Роман Романович
// Лабораторна робота № 4.1
// Цикли.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int N, i;
    double S;

    // N має бути в межах 1..22: при N <= 0 у діапазон потрапляє i = 0
    // (ділення на нуль), а при N > 22 сума порожня
    do {
        cout << "N (1..22) = ";
        cin >> N;
    } while (N < 1 || N > 22);

    cout << fixed << setprecision(6);

    // 1 спосіб: цикл while (з перед-умовою)
    S = 0;
    i = N;
    while (i <= 22)
    {
        S += sqrt(1. * i * i + 1. * N * N) / i;
        i++;
    }
    cout << "while        : " << S << endl;

    // 2 спосіб: цикл do..while (з після-умовою)
    S = 0;
    i = N;
    do {
        S += sqrt(1. * i * i + 1. * N * N) / i;
        i++;
    } while (i <= 22);
    cout << "do..while    : " << S << endl;

    // 3 спосіб: цикл for, лічильник зростає (i++)
    S = 0;
    for (i = N; i <= 22; i++)
    {
        S += sqrt(1. * i * i + 1. * N * N) / i;
    }
    cout << "for (i++)    : " << S << endl;

    // 4 спосіб: цикл for, лічильник спадає (i--)
    S = 0;
    for (i = 22; i >= N; i--)
    {
        S += sqrt(1. * i * i + 1. * N * N) / i;
    }
    cout << "for (i--)    : " << S << endl;

    return 0;
}