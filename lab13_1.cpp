#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[], int, double[]);

int main()
{
    double A[] = {1.2, 3.5, 6.9, 7.8, 12.5, 0.5};
    int N = sizeof(A) / sizeof(A[0]);
    double B[6];
    stat(A, N, B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double spiderman[], int N, double spidergirl[])
{
    double ari = 0;
    for (int i = 0; i < N; i++)
    {
        ari += spiderman[i];
    }
    ari /= N;
    spidergirl[0] = ari;

    double geo = 1;
    for (int i = 0; i < N; i++)
    {
        geo *= spiderman[i];
    }
    geo = pow(geo, 1.0 / N);

    spidergirl[2] = geo;

    double har = 0;
    for (int i = 0; i < N; i++)
    {
        har += 1 / spiderman[i];
    }
    spidergirl[3] = N / har;

    double max = spiderman[0], min = spiderman[0];
    for (int i = 0; i < N; i++)
    {
        if (spiderman[i] > max)
            max = spiderman[i];
        else if (spiderman[i] < min)
            min = spiderman[i];
    }
    spidergirl[4] = max;
    spidergirl[5] = min;

    double stand = 0;
    for (int i = 0; i < N; i++)
    {
        stand += pow(spiderman[i] - spidergirl[0], 2);
    }
    spidergirl[1] = sqrt(stand / N);
}