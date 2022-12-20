#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float funx(float x);
    float dfunx(float x);
    int n;
    float xi,xo,dx;
    cout<<"n: ";
    cin>>n;
    cout<<"xo: ";
    cin>>xo;
    for (int i = 1; i < n; i++)
    {
        dx = (funx(xo+0.0001)-funx(xo))/0.0001;
        xi =  xo - (funx(xo)/dx);
        xo = xi;
    }
    cout<<"Respuesta aproximada: "<<xi<<endl;
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
