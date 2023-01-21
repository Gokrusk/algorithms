// ALGORITMO PARA RESOLVER UNA ECUACION DIFERENCIAL

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    // PROTOTIPOS
    float f_dif(float t, float y, float x, float z);
    float f_dif2(float t, float y, float x, float z);
    float f_dif3(float t, float y, float x, float z);
    int N;
    float a, b, yo, xo, zo, h, k1, k2;
    cout << "Ingresar el dominio [a...]: ";
    cin >> a;
    cout << "Ingresar el dominio [b...]: ";
    cin >> b;
    cout << "Ingresar condicion inicial y: ";
    cin >> yo;
    cout << "Ingresar condicion inicial x: ";
    cin >> xo;
    cout << "Ingresar condicion inicial z: ";
    cin >> zo;
    cout << "Ingresar numero iteraciones: ";
    cin >> N;
    float t[N], y[N], x[N], z[N];
    t[0] = a;
    y[0] = yo;
    x[0] = xo;
    z[0] = zo;
    h = (b - a) / N;
    for (int i = 0; i < N; i++)
    {
        k1 = 0;
        k2 = 0;
        t[i + 1] = t[i] + h;
        k1 = h * f_dif(t[i], y[i], x[i], z[i]);
        k2 = h * f_dif(t[i + 1], y[i] + k1, x[i], z[i]);
        y[i + 1] = y[i] + ((k1 + k2) / 2);
        k1 = h * f_dif2(t[i], y[i], x[i], z[i]);
        k2 = h * f_dif2(t[i + 1], y[i], x[i] + k1, z[i]);
        x[i + 1] = x[i] + ((k1 + k2) / 2);
        k1 = h * f_dif3(t[i], y[i], x[i], z[i]);
        k2 = h * f_dif3(t[i + 1], y[i], x[i], z[i] + k1);
        z[i + 1] = z[i] + ((k1 + k2) / 2);
    }
    cout << "ti" << setw(10) << "yi" << setw(10) << "xi" << setw(10) << "zi" << endl;
    for (int i = 0; i <= N; i++)
    {
        cout << t[i] << setw(15) << y[i] << setw(10) << x[i] << setw(15) << z[i] << endl;
    }
    return 0;
}
float f_dif(float t, float y, float x, float z) // y
{
    return 2 * (x + y - 3 * t) * z;
}
float f_dif2(float t, float y, float x, float z) // x
{
    return (x - y + 2 * z)*t;
}
float f_dif3(float t, float y, float x, float z) // z
{
    return (1 - x + 2 - 2 * t) * y;
}

// return (1 - 2 * t) * y;
//  return 0.01*(500 - y) * y;