/*5. Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes.*/
#include <iostream>
#include <cmath>        
#include <complex>        
using namespace std;
void calcularRaices(double a, double b, double c, complex<double> &raiz1, complex<double> &raiz2, bool &sonReales) {
    double discriminante = pow(b,2) - 4*a*c;
    if (discriminante >= 0) {
        sonReales = true;
        double raizDiscriminante = sqrt(discriminante);
        raiz1 = complex<double> ((-b + raizDiscriminante) / (2*a),0);
        raiz2 = complex<double> ((-b - raizDiscriminante)/ (2*a),0);
    } else {
        sonReales = false;
        double raizDiscriminante = sqrt(-1*discriminante);
        raiz1 = complex<double>(-b / (2*a), raizDiscriminante / (2*a));
        raiz2 = complex<double>(-b / (2*a), -raizDiscriminante / (2*a));
    }
}

int main() {
    double a1, b2, c3;
    cout << "Ingrese el coeficiente a: ";
    cin >> a1;
    cout << "Ingrese el coeficiente b: ";
    cin >> b2;
    cout << "Ingrese el coeficiente c: ";
    cin >> c3;
    complex<double> r1, r2;
    bool sonReales;
    calcularRaices(a1, b2, c3, r1, r2, sonReales);
    if (sonReales) {
        cout << "Las raices son: x1 = " << r1.real() <<" "<<"x2 = " << r2.real() <<endl;
    } else {
        cout << "Las raices son complejas: x1 = " << r1.real() << " + " << r1.imag() << "i" <<" "<< "x2 = " << r2.real() << " - " << fabs(r2.imag()) << "i\n";
    }
    return 0;
}
