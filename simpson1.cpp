#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // PROTOTIPOS
    float funX(float x);
    float formula(float a, float b, float c);
    float a, b, c;
    cout << "Ingresar el intervalo de integracion: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    c = (b + a) / 2;
    cout << "Solucion aproximada:" << formula(a, b, c);
    cout << endl;
    return 0;
}

float funX(float x)
{
    // return exp(x*x);
    // return x*x*x;
    // return sqrt(x);
    // return sqrt(exp(x));
    // return pow(sin(x),4);
    // return 1/(1+pow(x,6));
    return pow(3,x);
}

float formula(float a, float b, float c)
{
    return ((b - a) / 6) * (funX(a) + 4 * funX(c) + funX(b));
}