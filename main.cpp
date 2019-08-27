//Danilo Alvarado Arce
#include "Empleado.h"
using std::cout;
using std::cin;
const int CANTIDAD = 3;

int main() {
	srand(time(NULL));
	string nombres;
	int annios;
	float salarios;
	int contador;
	int numeroE;
	
    Empleado empleados[CANTIDAD];

	for (contador=0; contador < CANTIDAD; contador++) {
		cout << "digite el nombe del empleado [" << contador+1 << "]\n";
		cin >> nombres;
		empleados[contador].setNombre(nombres);
		//
		cout << "digite los annios de experiencia del empleado [" << contador+1 << "]\n";
		cin >> annios;
		empleados[contador].setAnnios(annios);
		//
		cout << "digite el salario del empleado [" << contador+1 << "]\n";
		cin >> salarios;
		empleados[contador].setSalario(salarios);
		//
		numeroE=1 + rand() % (101 - 1);
		empleados[contador].setNumeroEmpleado(numeroE);
		cout << "su numero de empleado es: [" << numeroE << "]\n\n";
	}

	/*
	 Empleado empleado[3];
	 empleado[0].setNombre("Mike");
	 empleado[0].setAnoExperiencia(2);
	 empleado[0].setSalarioBase(1200000);
	*/
	
	for (contador = 0; contador < CANTIDAD; contador++) {
		cout << "Empleado #:[" << empleados[contador].getNumeroEmpleado() << "]\n"
			<< empleados[contador].obtenerReporteEmpleado();
	}

	cin.get();
    return 0;
}