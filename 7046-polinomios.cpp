//IMPLEMENTACION ALGORITMO ESTANDAR DE POLINOMIOS
#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cout<<"Ingresar orden de polinomio: ";
    cin>>n;
    cout<<"Ingresar valor de x: ";
    cin>>x;
    float a[n];
    cout<<"Ingresar los coeficientes"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<"Ingrese coeficiente: ";
        cin>>a[i];
    }
    float S=a[0],P=1;   //S empieza en a[0]
    for (int i = 1; i <= n; i++)
    {
        P*=x;
        S+=a[i]*P;
    }
    cout<<"Valor de sumatoria: "<<S<<endl;
    return 0;
}