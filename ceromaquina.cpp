//BUSCAR EL CERO MAQUINA

#include <iostream>
using namespace std;
	void xdd(float x, float a);
	void xd(double x, double a);
int main()
{
	float x = 1, a = 0;
	double y = 1, b = 0;
	xdd(x,a);
	xd(y,b);
	return 0;
}
void xdd(float x, float a){
	int i = 0;
	do{
	x /= 2;
	a = 1 + x;
	i++;
	}while(a>1);
	cout<<"Float"<<endl;
	cout<<"N veces: "<<i<<endl;
	cout<<"El cero' es: "<<x<<endl;
}
void xd(double x, double a){
	int i = 0;
	do{
	x /= 2;
	a = 1 + x;
	i++;
	}while(a>1);
	cout<<"Double"<<endl;
	cout<<"N veces: "<<i<<endl;
	cout<<"El cero' es: "<<x<<endl;
}