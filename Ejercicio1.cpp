/*1. Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double radio, areaCirculo;
	cout<<"Para calcular el area de un circulo se necesita el siguiente dato: "<<endl;
	cout<<"Indique la medida del radio del circulo: ";
	cin>>radio;
		areaCirculo=M_PI*pow(radio,2);
	cout<<"El area del circulo es: "<<areaCirculo<<endl;
	return 0;
	}
