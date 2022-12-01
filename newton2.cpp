#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float funx(float x);
    float dfunx(float x, int n);    //funcion que calcula derivada
    float n, x0, x1, dx;
    cout << "Ingrese cantidad de iteraciones: ";
    cin >> n;
    cout << "Ingrese punto inicial: ";
    cin >> x0;
    for (int i = 1; i <= n; i++)
    {
        //dx = dfunx(x0,n);
        dx = (funx(x0+0.0001)-funx(x0))/0.0001;         //calculo derivada
        x1 = x0 - (funx(x0) / dx);
        x0 = x1;
    }

    cout << "La solucion aproximada es: " << x1 << endl;
    return 0;
}
float funx(float x)
{
    return 500*exp(-0.0248*x) - 5;
}
float dfunx(float x, int n)
{
    float dx;
    for (int i = 1; i < n; i++)
    {   
        dx = (funx(x+0.0001)-funx(x))/0.0001;
    }
    return dx;   
}