// ALGORITMO PARA RESOLVER UNA ECUACION DIFERENCIAL

#include <iostream>
using namespace std;

int main()
{
    // PROTOTIPOS
    float f_dif(float t, float y);
    int N;
    float a, b, yo, h, k1, k2;
    cout << "Ingresar el dominio [a...]: ";
    cin >> a;
    cout << "Ingresar el dominio [b...]: ";
    cin >> b;
    cout << "Ingresar condicion inicial: ";
    cin >> yo;
    cout << "Ingresar numero iteraciones: ";
    cin >> N;
    float t[N], y[N];
    t[0] = a;
    y[0] = yo;
    h = (b - a) / N;
    cout << "t   y" << endl;
    for (int i = 0; i < N; i++)
    {
        k1 = h *f_dif(t[i],y[i]);
        t[i + 1] = t[i] + h;
        k2 = h*f_dif(t[i+1],y[i]+k1);
        y[i + 1] = y[i] + ((k1+k2)/2);
        // cout<<k1<<" "<<k2<<endl;
    }
    for (int i = 0; i <= N; i++)
    {
        cout << t[i] << " " << y[i] << endl;
    }
    return 0;
}

float f_dif(float t, float y)
{
    return (1 - 2 * t) * y;
    // return 0.01*(500 - y) * y;
}