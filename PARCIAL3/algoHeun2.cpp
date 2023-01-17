// ALGORITMO PARA RESOLVER UNA ECUACION DIFERENCIAL

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    // PROTOTIPOS
    float f_dif(float t, float y, float x);
    float f_dif2(float t, float y, float x);
    int N;
    float a, b, yo, xo, h, k1, k2, k12, k22;
    cout << "Ingresar el dominio [a...]: ";
    cin >> a;
    cout << "Ingresar el dominio [b...]: ";
    cin >> b;
    cout << "Ingresar condicion inicial y: ";
    cin >> yo;
    cout << "Ingresar condicion inicial x: ";
    cin >> xo;
    cout << "Ingresar numero iteraciones: ";
    cin >> N;
    float t[N], y[N], x[N], t2[N];
    t[0] = a;
    y[0] = yo;
    x[0] = xo;
    h = (b - a) / N;
    for (int i = 0; i < N; i++)
    {
        k1 = h * f_dif(t[i], y[i], x[i]);
        t[i + 1] = t[i] + h;
        k2 = h * f_dif(t[i + 1], y[i] + k1, x[i]);
        y[i + 1] = y[i] + ((k1 + k2) / 2);
        k12 = h * f_dif2(t[i], y[i], x[i]);
        k22 = h * f_dif2(t[i + 1], y[i], x[i] + k12);
        x[i + 1] = x[i] + ((k12 + k22) / 2);
    }
    cout << "ti" << setw(10) << "yi" << setw(10) << "xi" << endl;
    for (int i = 0; i <= N; i++)
    {
        cout << t[i] << setw(15) << y[i] << setw(10) << x[i] << endl;
    }
    return 0;
}

float f_dif(float t, float y, float x)
{
    return (t - x) * y;
}
float f_dif2(float t, float y, float x)
{
    return (t + y) * x;
}

// return (1 - 2 * t) * y;
//  return 0.01*(500 - y) * y;