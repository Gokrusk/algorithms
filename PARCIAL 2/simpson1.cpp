#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // PROTOTIPOS
    float funX(float x);
    float formula(float a, float b, float c, float lg);
    float a, b, c, lg;
    cout << "Ingresar el intervalo de integracion: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    c = (b + a) / 2;
    lg = b - a;
    cout << "Solucion aproximada:" << formula(a, b, c, lg);
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
    // return pow(3,x);
    return 1/sqrt(1+pow(x,2));
}

float formula(float a, float b, float c, float lg)
{
    int n = 0;  // cantidad de veces para la que se va a dividir la integracion
    float h, s = 0;
    if (lg <= 1)
    {
        s = ((b - a) / 6) * (funX(a) + 4 * funX(c) + funX(b));
    }
    else
    {
        n = trunc(lg) + 1;  // calculando las cantidad de divisiones que tendrá la integral
        h = lg / n; // se calcula la primera division de la integral
        for (int i = 1; i <= n; i++)
        {
            b = a + h;  // el valor de b cambia de acuerdo a la division
            c = a + (h / 2);    // el valor de c es el punto medio entre a y la division h
            s += (((b - a) / 6) * (funX(a) + 4 * funX(c) + funX(b)));   // se realiza la sumatoria
            a = b;  //el valor de a avanza
        }
    }
    return s;   // se retorna el valor aproximado de la integral
}