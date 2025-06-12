/*4.Calculo de Raices de una Ecuacion Cuadratica: Crea un programa que calcule las raices de una
ecuacion cuadratica utilizando la formula general. Utiliza la funcion sqrt de la libreria cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, b, c, discriminante, raiz1, raiz2, discriminanteNegativa;
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;
	discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
           cout << "La primera raiz es: "<<raiz1<<endl;
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    	   cout << "La segunda raiz es: "<<raiz2<<endl;
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        cout << "Las raices son iguales con valor de: " <<raiz1<< endl;
    } else {
    	discriminanteNegativa= 4 * a * c - pow(b, 2);
    	raiz1 = (-b + sqrt(discriminanteNegativa)) / (2 * a);
           cout << "La primera raiz es: "<<raiz1<<"i"<<endl;
        raiz2 = (-b - sqrt(discriminanteNegativa)) / (2 * a);
    	   cout << "La segunda raiz es: "<<raiz2<<"i"<<endl;
    }
    return 0;
}
