//BUSCAR EL CERO MAQUINA

#include <iostream>
using namespace std;
	void ceromaqnf(float x, float a);
	void ceromaqnd(double x, double a);
int main()
{
	float x = 1, a = 0;
	double y = 1, b = 0;
	ceromaqnf(x,a);
	ceromaqnd(y,b);
	return 0;
}
void ceromaqnf(float x, float a){
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
void ceromaqnd(double x, double a){
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