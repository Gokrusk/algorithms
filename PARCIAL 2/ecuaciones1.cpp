#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float funR(float x);
	float a, b, h, x1, x2, sg;
	bool aux = false;
	// Ingresando dominio de busqueda (a, b)
	cout << "Ingrese a: ";
	cin >> a;
	cout << "Ingrese b: ";
	cin >> b;
	// Ingresando paso de busqueda
	cout << "Ingrese h (0.1): ";
	cin >> h;
	// Asignando 
	x1 = a;
	do
	{
		x2 = x1 + h;	// asignacion para calcular en el intervalo x1, x2 con el paso h
		sg = funR(x1) * funR(x2);
		if (sg > 0)
		{
			x1 = x2;
		}
		else
		{
			aux = true;
		}
	}while (aux == false && x2 < b);
	if (aux == false)
	{
		cout << "No se encontr\242 soluci\242n" << endl;
	}
	else
		cout << "La soluci\242n aproximada es: " << (x1 + x2) / 2 << endl;
	return 0;
}
float funR(float x)
{
	return exp(x) + x - 2;
}