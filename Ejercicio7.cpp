/*7. Juego de Dados por Turnos: Desarrolla un programa que simule un juego entre dos jugadores que
lanzan un dado por turnos. Cada dado genera un número aleatorio entre 1 y 6. El jugador que
obtenga el número mayor gana la ronda. El primero en ganar 3 rondas será el ganador del juego.
Muestra el resultado de cada ronda y el marcador acumulado. Usa funciones y números aleatorios
(rand de cstdlib).*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int lanzarDado() {
    return rand() % 6 + 1;
}
void resultado(int dado1, int dado2, int& jugador1, int& jugador2) {
    if (dado1 > dado2) {
        jugador1++;
        cout<<"Punto para jugador 1: 1 "<<endl;
    } else {
        if (dado2 > dado1) {
            jugador2++;
        cout<<"Punto para jugador 2: 1 "<<endl;
        } else {
            cout << "Empate" << endl;
        }
    }
}
void ganador(int jugador1, int jugador2) {
    if (jugador1 == 3) {
        cout << "*********El jugador 1 gana el juego*********" << endl;
    } else {
        cout << "********El jugador 2 gana el juego*********" << endl;
    }
}
int main() {
    int jugador1 = 0, jugador2 = 0, dado1, dado2;
    srand(time(0));
    while (jugador1 != 3 && jugador2 != 3) {
        cout << "Lanza el jugador 1: ";
        dado1 = lanzarDado();
		cout <<dado1<< endl;
        cout << "Lanza el jugador 2: ";
        dado2 = lanzarDado();
        cout <<dado2<< endl;
        resultado(dado1, dado2, jugador1, jugador2);
    }
    ganador(jugador1, jugador2);
    return 0;
}
