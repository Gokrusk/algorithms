#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float funx(float x);
    float dfunx(float x);
    float n, x0, x1;
    cout << "Ingrese cantidad de iteraciones: ";
    cin >> n;
    cout << "Ingrese punto inicial: ";
    cin >> x0;
    for (int i = 1; i <= n; i++)
    {
        x1 = x0 - (funx(x0) / dfunx(x0));
        x0 = x1;
    }

    cout << "La solucion aproximada es: " << x1 << endl;
    return 0;
}
float funx(float x)
{
    return exp(x) + x - 3;
}
float dfunx(float x)
{
    return exp(x) + 1;
}