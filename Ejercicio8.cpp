/*8. Simulación de Tragamonedas Simple: Crea un programa que simule una máquina tragamonedas.
El usuario inicia con 100 monedas y puede apostar entre 1 y 10 por turno. Se generan tres números
aleatorios entre 1 y 5. Si los tres son iguales, gana 10 veces su apuesta. Si hay dos iguales, gana el
doble. Si forman una escalera (por ejemplo como 2-3-4 o 4-3-2), gana 5 veces su apuesta. En
cualquier otro caso, pierde lo apostado. El juego continúa hasta que el jugador se quede sin monedas
o decida salir. Usa funciones y números aleatorios*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int monedas = 100;
int numAleatorios(){
	return rand()%5+1;
}

int main(){
	char rpta;
	int num1,num2,num3, apuesta;
	srand(time(0));
	cout<<"Saldo inicial 100 monedas"<<endl;
	do{
	cout<<"¿Cuanto desea apostar?, minimo permititdo = 1, maximo permitido = 10: "<<endl;
	cin>>apuesta;
	while(apuesta<1 || apuesta>10 || apuesta>monedas){
			cout<<"Ingrese un monto correcto"<<endl;
		}
		num1=numAleatorios();
		cout<<"| "<<num1<<" | ";
		num2=numAleatorios();
		cout<<"| "<<num2<<" | ";
		num3=numAleatorios();
		cout<<"| "<<num3<<" | "<<endl;
		if(num1 == num2 & num2 == num3){
			cout<<"X10 *3 IGUALES*"<<endl;
			monedas = (monedas-apuesta)+apuesta*10;
		}else if(num1 == num2 || num1 == num3 || num2==num3){
			cout<<"X2 *2 IGUALES*"<<endl;
			monedas = (monedas-apuesta)+apuesta*2;
		}else if((num1==num2+1 & num2==num3+1)|| (num1==num2-1 & num2==num3-1)){
			cout<<"X5 *ESCALERA*"<<endl;
			monedas = (monedas-apuesta)+apuesta*5;
		}else{
			cout<<"X0 *NO HAY COMBINACIONES*";
			monedas = (monedas-apuesta)+apuesta*0;
		}
		cout<<"Tiene: "<<monedas<<" monedas"<<endl;
			cout<<"Desea continuar? (S/N): "; 
			cin>>rpta;
	}while((rpta ==S|| rpta == s) & monedas>0);
	return 0;
}
