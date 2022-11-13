#include <iostream>
using namespace std;

class Fraccion
{
public:

	void setnumerador(int n) {//setters y getters de numerador
		numerador = n;
	}
	int getnumerador() {
		cout << "Leyendo numerador: " << numerador << "\n";
		return numerador;
	}

	void setdenominador(int d) {//setters y getters de denominador
		denominador = d;
	}
	int getdenominador() {
		cout << "Leyendo denominador: " << denominador << "\n";
		return denominador;
	}

	Fraccion(int n, int d) {//constructor
		numerador = n;
		denominador = d;
	}

	void readfraccion() {//método para leer fracción
		cout << "---------------------\n\n";
		cout << "Leyendo fracción...\n";
		cout << "Numerador: " << numerador << "\n";
		cout << "Denominador: " << denominador << "\n";
		cout << "---------------------\n";
		cout << numerador << "/" << denominador << "\n";
		cout << "---------------------\n\n";
	}

private:

	int numerador;//variables
	int denominador;

};

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8"); //Configuración regional

	Fraccion fraccion1(8, 3);//creamos una fracción con nombre fraccion1 y sus valores
	fraccion1.readfraccion();//leemos la fracción
	fraccion1.setnumerador(3);//cambiamos el denominador
	fraccion1.getnumerador();//comprobamos que se ha cambiado el denominador
	fraccion1.setdenominador(5);//cambiamos el numerador
	fraccion1.getdenominador();//comprobamos que se ha cambiado el numerador
	fraccion1.readfraccion();//finalmente imprimimos la fracción
}