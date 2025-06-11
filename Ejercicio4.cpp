/*4.Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, b, c, discriminante, raiz1, raiz2;
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
        cout << "La ecuacion tiene raices complejas no tiene solucion en los reales" <<endl;
    }
    return 0;
}
