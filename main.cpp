//Danilo Alvarado Arce
#include "Empleado.h"
using std::cout;
using std::cin;
const int CANTIDAD = 1;

int main() {
	srand(time(NULL));
	string nombres;
	int annios;
	float salarios;
	int contador;
	int numeroE = 1 + rand() % (101 - 1);
	
    Empleado empleados[CANTIDAD];

	for (contador=0; contador < CANTIDAD; contador++) {
		cout << "digite el nombe del empleado [" << contador+1 << "]\n";
		cin >> nombres;
		empleados[contador].setNombre(nombres);
		//empleados[contador].setFlagTrue();
		//
		cout << "digite los annios de experiencia del empleado [" << contador+1 << "]\n";
		cin >> annios;
		empleados[contador].setAnnios(annios);
		//
		cout << "digite el salario del empleado [" << contador+1 << "]\n";
		cin >> salarios;
		empleados[contador].setSalario(salarios);
		//
		numeroE= 1+ rand() % (101 - 1);
		empleados[contador].setNumeroEmpleado(numeroE);
		cout << "su numero de empleado es: [" << numeroE << "]\n\n";
	}
	int binFlag = (rand() % 2);
	for (contador = 0; contador < CANTIDAD; contador++) {
		//binFlag = (rand() % 2);
		binFlag = 1;
		cout << "Empleado #:[" << empleados[contador].getNumeroEmpleado() << "]\n"
			<< empleados[contador].obtenerReporteEmpleado(empleados[contador],binFlag);
	}
	
	/* Empleado empleado[CANTIDAD];
	 empleado[0].setNombre("Mike");
	 empleado[0].setAnnios(2);
	 empleado[0].setSalario(1200000);


	 cout << "Empleado #:[" << empleados[0].getNumeroEmpleado() << "]\n"
		 << empleados[0].obtenerReporteEmpleado(empleados[0]);
	
	*/
	

	cin.get();
    return 0;
}