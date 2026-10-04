#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, k;
    double P;

    cout << "N = ";
    cin >> N;

    // 1) цикл while
    P = 1;
    k = N;
    while (k <= 25)
    {
        P *= sqrt(1 + 1. * N / k);
        k++;
    }
    cout << P << endl;

    // 2) цикл do...while
    P = 1;
    k = N;
    do
    {
        P *= sqrt(1 + 1. * N / k);
        k++;
    } while (k <= 25);
    cout << P << endl;

    // 3) цикл for (k++)
    P = 1;
    for (k = N; k <= 25; k++)
    {
        P *= sqrt(1 + 1. * N / k);
    }
    cout << P << endl;

    // 4) цикл for (k--)
    P = 1;
    for (k = 25; k >= N; k--)
    {
        P *= sqrt(1 + 1. * N / k);
    }
    cout << P << endl;

    return 0;
}