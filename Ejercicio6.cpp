/*6. Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
	int usuario=0, computadora=0, ganador=0, eleccion;
	srand(time(0));
	while (ganador!=3){
		do{
			cout<<"Escoja: Piedra, Papel o Tijeras"<<endl;
			cout<<"1. Piedra"<< endl;
			cout<<"2. Papel"<< endl;
			cout<<"3. Tijeras"<< endl;
			cin>>eleccion;
			int numAleatorio= rand()%3+1;
			switch (eleccion){
				case 1://usuario elije piedra
					switch (numAleatorio){
						case 1:
							cout<<"La computadora eligio aleatoriamente: Piedra"<<endl;
							cout<<"Empate"<<endl;
							break;
						case 2:
							cout<<"La computadora eligio aleatoriamente: Papel"<<endl;
							cout<<"Punto para la computadora"<<endl;
							computadora++;
							ganador=computadora;
							break;
						case 3:
							cout<<"La computadora eligio aleatoriamente: Tijeras"<<endl;
							cout<<"Punto para el usuario"<<endl;
							usuario++;
							ganador=usuario;
							break;}
				break;
				case 2://usuario elije papel
					switch (numAleatorio){	
						case 1:
							cout<<"La computadora eligio aleatoriamente: Piedra"<<endl;
							cout<<"Punto para el usuario"<<endl;
							usuario++;
							ganador=usuario;
							break;
						case 2:
							cout<<"La computadora eligio aleatoriamente: Papel"<<endl;
							cout<<"Empate"<<endl;
							break;
						case 3:
							cout<<"La computadora eligio aleatoriamente: Tijeras"<<endl;
							cout<<"Punto para la computadora"<<endl;
							computadora++;
							ganador=computadora;
							break;}
					break;
				case 3://usuario elije tijera
					switch (numAleatorio){
						case 1:
							cout<<"La computadora eligio aleatoriamente: Piedra"<<endl;
							cout<<"Punto para la computadora"<<endl;
							computadora++;
							ganador=computadora;
							break;
						case 2:
							cout<<"La computadora eligio aleatoriamente: Papel"<<endl;
							cout<<"Punto para el usuario"<<endl;
							usuario++;
							ganador=usuario;
							break;
						case 3:
							cout<<"La computadora eligio aleatoriamente: Tijeras"<<endl;
							cout<<"Empate"<<endl;
							break;}
					break;
				default:
					cout<<"Ingrese una eleccion correcta"<<endl;
					break;
				}
			}
	 while (ganador!=3);}
 	if (usuario == 3) {
        cout << "El ganador es: Usuario" << endl;
    } else if (computadora == 3) {
        cout << "El ganador es: Computadora" << endl;
    }
    return 0;
}
