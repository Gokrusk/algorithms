#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float xo,yo,xn,yn, xn1, yn1, d;
    bool aux = false;
    int i = 0;
    cout<<"Ingrese (xo, yo): "<<endl;
    cin>>xo;
    cout<<", ";
    cin>>yo;
    xn = xo; yn = yo;
    do
    {
        xn1 = xn*xn - yn*yn + xo;
        yn1 = 2*xn*yn + yo;
        d = sqrt(pow((xn1-xo),2) + pow((yn1-yo),2));
        i++;
        if(d <= 2)
        {
            xn = xn1;
            yn = yn1;
        }else{
            aux = true;
        }
    } while (!aux and (i <= 70));
    if(i >= 70)
    {
        cout<<"Si converge"<<endl;
    }else{
        cout<<"No converge. Grado de divergencia: "<<i<<endl;
    }
    return 0;
}