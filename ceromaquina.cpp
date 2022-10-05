// BUSCAR EL CERO MAQUINA
// INGRESAR x = 1
// HACER x = x /2
//		a = 1 + x mientras a>1
// IMPRIMIR el cero maquina

#include <iostream>
using namespace std;

float ceromaqnf(float x, float a);
double ceromaqnd(double x, double a);

int main()
{
	float x = 1, a = 0, cf = 0;
	double y = 1, b = 0, cd = 0;
	cf = ceromaqnf(x, a);
	cd = ceromaqnd(y, b);
	cout << fixed << endl;
	cout << "Notacion cientifica a decimal: " << endl;
	cout << "Cero maquina float: " << cf << endl;
	cout << "Cero maquina double: " << cd << endl;
	return 0;
}

float ceromaqnf(float x, float a)
{
	int i = 0;
	do
	{
		x /= 2;
		a = 1 + x;
		i++;
	} while (a > 1);
	cout << "Float" << endl;
	cout << "N veces: " << i << endl;
	cout << "El cero' es: " << x << endl;
	return x;
}

double ceromaqnd(double x, double a)
{
	int i = 0;
	do
	{
		x /= 2;
		a = 1 + x;
		i++;
	} while (a > 1);
	cout << "Double" << endl;
	cout << "N veces: " << i << endl;
	cout << "El cero' es: " << x << endl;
	return x;
}