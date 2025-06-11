/*3.Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
resultado de la hipotenusa calculada.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double lado1, lado2, hipotenusa;
    cout << "Ingrese uno de los lados del triangulo: ";
    cin >> lado1;
    cout << "Ingrese el otro lado del triangulo: ";
    cin >> lado2;
    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    cout << "La hipotenusa es: " << hipotenusa << endl;
    return 0;
}
