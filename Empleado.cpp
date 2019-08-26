/* * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com //Danilo Alvarado Arce
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include"Empleado.h"
Empleado::Empleado(){}
Empleado::Empleado(){}
float Empleado::aumentoSalario(Empleado* Empleado) {
	float aumento = 0;
	if (Empleado->anniosExp>= 3) { aumento = (Empleado->salarioBase * 0.05) * Empleado->anniosExp; }
	else{ aumento = (Empleado->salarioBase * 0.02) * Empleado->anniosExp; }
	Empleado->salarioBase += aumento;
	return aumento;
}
void Empleado::revisionAleatoria(Empleado* Empleado) {
	Empleado->revision = ((0 + rand() % (2 - 0)) == 1) ? true : false;

}
string Empleado::obtenerReporteEmpleado() {

}



