// PROGRAMACION LOGICA
#include <iostream>
using namespace std;

int main()
{
    // PROTOTIPOS
    void fibonacci();
    void numeroArmstrong(int x);
    void numeroPrimo(int x);
    void numeroPerfecto(int x);
    void factorialNum(int x);
    void numeroPalindromo(int x);
    int n = 0;
    // fibonacci();
    cout << "Ingrese num: ";
    cin >> n;
    // numeroArmstrong(n);                                       //153, 371, 8208,
    // numeroPrimo(n);
    //numeroPerfecto(n); // 6, 28, 496
    //factorialNum(n);
    //numeroPalindromo(n);                                         //121,232,343,3245423
    return 0;
}

void fibonacci()
{
    float a1 = 0, a2 = 1, vec[100];
    vec[0] = a1;
    vec[1] = a2;
    cout << a1 << endl;
    cout << a2 << endl;
    for (int i = 2; i < 98; i++) // 100 primeros numeros de la serie de fibonacci
    {
        vec[i] = vec[i - 2] + vec[i - 1];
        cout << i << " " << vec[i] << endl;
    }
}

void numeroArmstrong(int x)
{
    int cubo = 0, s = 0, aux = 1;
    while (x > 0)
    {
        aux = 1;
        cubo = x % 10;
        x /= 10;
        cout << cubo << endl;
        for (int i = 0; i < 3; i++)
        {
            aux *= cubo;
        }
    }
    if (s == x)
    {
        cout << "Es un numero de Armstrong" << endl;
    }
    else
        cout << "No es un numero de Armstrong" << endl;
}
void numeroPrimo(int x)
{
    int m = x / 2, flag = 1;
    if (x == 0 || x == 1)
    {
        flag = 0;
    }
    else
    {
        for (int i = 2; i <= m; i++)
        {
            if (x % i == 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        cout << x << " es primo" << endl;
    }
    else
        cout << x << " no es primo" << endl;
}
void numeroPerfecto(int x)
{
    int d = 0, s = 0, n = x;
    while (n >= 1)
    {
        d = x % n;
        if (n < x && d == 0)
        {
            cout << n << endl;
            s += n;
        }
        n--;
    }
    if (s == x)
    {
        cout << x << " es perfecto" << endl;
    }
    else
        cout << x << " no es perfecto" << endl;
}

void factorialNum(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    cout << "Factorial de " << x << " = " << f <<endl;
}

void numeroPalindromo(int x)
{
    int aux, n, temp = x;
    while(x > 0)
    {
        aux = x % 10;
        n = (n*10)+aux;
        x /= 10;
    }
    if (temp == n)
    {
        cout << temp << " es palindromo" << endl;
    }
    else
        cout << temp << " no es palindromo" << endl;
}
