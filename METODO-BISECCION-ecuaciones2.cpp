#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float funR(float x);
    float a, b, c, e, sg, x1, x2;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;

    sg = funR(a) * funR(b);
    if (sg > 0)
    {
        cout << "No se encuentra soluci\242n en ese intervalo" << endl;
    }
    else
    {
        x1 = a;
        x2 = b;
        e = (x2 - x1) / 2;
        while (e >= 0.0001)
        {
            c = (x1 + x2) / 2;
            sg = funR(x1) * funR(c);
            if (sg < 0)
            {
                x2 = c;
            }
            else
                x1 = c;
            e = (x2 - x1) / 2;
        } 
    }
    cout << "La solucion aproximada es: " << c << endl;
    return 0;
}
float funR(float x)
{    
    float k,w,p;
    w = 3, k=0.5, p = 500;
    //return exp(x) + x - 2;
    //return 80*exp(-2*x)+20*exp(-0.5*x)-7;
    //return 8*exp(-k*x)*cos(w*x)-4;
    //return p*exp(-0.0248*x)-5;
    return x*x-5;
}