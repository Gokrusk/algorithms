// PROGRAMA QUE IMPLEMENTE EL ALGORITMO DE EUCLIDES PARA HALLAR EL MCD ENTRE DOS NUMEROS ENTEROS
#include <iostream>
using namespace std;

int main()
{
    // PROTOTIPO
    void euclides(int a, int *b, int c, int r, int m);
    int mcd = 0, a = 0, b = 0, c = 0, r = 0, m = 0;
    cout << " MCD(a,b) " << endl;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    m = b;
    euclides(a, &m, c, r, m);
    cout << "El mcd(" << a << ", " << b << ") = " << m << endl;
    return 0;
}

void euclides(int a, int *b, int c, int r, int m)
{
    c = a / *b;
    r = a % *b;
    if (r != 0)
    {
        a = *b;
        *b = r;
        euclides(a, b, 0, 0, m);
    }
}