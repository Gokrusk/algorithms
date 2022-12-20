#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float funx(float x);
    float n, x0, x1, dx, d;
    bool aux = false;
    cout << "Ingrese cantidad de iteraciones: ";
    cin >> n;
    cout << "Ingrese punto inicial: ";
    cin >> x0;
    for (int i = 1; i <= n; i++)
    {
        dx = (funx(x0 + 0.0001) - funx(x0)) / 0.0001; // calculo derivada
        x1 = x0 - (funx(x0) / dx);
        d = abs(x1 - x0);
    }
    if (d < 0.01)
    {
        cout << "La solucion aproximada es: " << x1 << endl;
    }
    else
        cout << "El algoritmo no encontro la raiz" << endl;
    return 0;
}
float funx(float x)
{
    // return 500*exp(-0.0248*x) - 5;
    return pow(x, 3) + 3;
}