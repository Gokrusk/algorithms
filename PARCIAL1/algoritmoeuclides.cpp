// PROGRAMA QUE IMPLEMENTE EL ALGORITMO DE EUCLIDES PARA HALLAR EL MCD ENTRE DOS NUMEROS ENTEROS
#include <iostream>
using namespace std;

int main()
{
    // PROTOTIPO
    void euclides(int a, int *b, int c, int r, int m);              //O(1)
    int mcd = 0, a = 0, b = 0, c = 0, r = 0, m = 0;                 //O(1)
    cout << " MCD(a,b) " << endl;                                   //O(1)
    cout << "Ingrese a: ";                                          //O(1)
    cin >> a;                                                       //O(1)
    cout << "Ingrese b: ";                                          //O(1)
    cin >> b;                                                       //O(1)
    m = b;                                                          //O(1)
    euclides(a, &m, c, r, m);                                       //O(log(n))
    cout << "El mcd(" << a << ", " << b << ") = " << m << endl;     //O(1)
    return 0;                                                       //O(1)
}

void euclides(int a, int *b, int c, int r, int m)
{
    c = a / *b;                                                     //O(1)
    r = a % *b;                                                     //O(1)
    if (r != 0)                                                     //O(1)
    {
        a = *b;                                                     //O(1)
        *b = r;                                                     //O(1)
        euclides(a, b, 0, 0, m);                                    //O(log(n))
    }
}