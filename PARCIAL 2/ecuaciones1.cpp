#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float funR(float x);
	float a, b, h, x1, x2, sg;
	bool aux = false;
	cout << "Ingrese a: ";
	cin >> a;
	cout << "Ingrese b: ";
	cin >> b;
	cout << "Ingrese h (0.1): ";
	cin >> h;
	x1 = a;
	while (aux == false && x2 < b)
	{
		x2 = x1 + h;
		sg = funR(x1) * funR(x2);
		if (sg > 0)
		{
			x1 = x2;
		}
		else
		{
			aux = true;
		}
	}
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