// ALGORITMO PARA RESOLVER UNA ECUACION DIFERENCIAL

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    // PROTOTIPOS
    float f_dif(float y);
    float f_dif2(float t, float y);
    int N;
    float a, b, yo, yi, h, k1, k2;
    cout << "Ingresar el dominio [a...]: ";
    cin >> a;
    cout << "Ingresar el dominio [b...]: ";
    cin >> b;
    cout << "Ingresar condicion inicial y': ";
    cin >> yo;
    cout << "Ingresar condicion inicial y'': ";
    cin>>yi;
    cout << "Ingresar numero iteraciones N: ";
    cin >> N;
    float t[N], y[N], y2[N];
    t[0] = a;
    y[0] = yo;
    y2[0] = yi;
    h = (b - a) / N;
    for (int i = 0; i < N; i++)
    {
        t[i + 1] = t[i] + h;
        k1 = h * f_dif(y2[i]);
        k2 = h * f_dif(y[i] + k1);
        y[i + 1] = y[i] + ((k1 + k2) / 2);
        k1 = h * f_dif2(t[i], y2[i]);
        k2 = h * f_dif2(t[i + 1], y2[i] + k1);
        y2[i + 1] = y2[i] + ((k1 + k2) / 2);
    }
    cout << "ti" << setw(10) << "y"<< endl;
    for (int i = 0; i <= N; i++)
    {
        cout << t[i] << setw(15) << y[i] << endl;
    }
    return 0;
}
float f_dif(float y)
{
    return y;
}
float f_dif2(float t, float y)
{
    return 12*t+4*y;
}

// return (1 - 2 * t) * y;
//  return 0.01*(500 - y) * y;
