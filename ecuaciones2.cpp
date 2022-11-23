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
        cout << "No se encuentra soluci\242 en ese intervalo" << endl;
    }
    else
    {
        x1 = a;
        x2 = b;
        e = (x2 - x1) / 2;
        while (e >= 0.1)
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
{    return exp(x) + x - 2;
}