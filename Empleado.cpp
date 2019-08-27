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

Empleado::Empleado():nombre(""),numeroEmpleado(0),anniosExp(0),salarioBase(0),revision(0){}
Empleado::Empleado(string nombre, int numeroEmp, int annios, float salario):nombre(nombre),numeroEmpleado(numeroEmp)
,anniosExp(annios),salarioBase(salario),revision(0){}


float Empleado::aumentoSalario(Empleado* Empleado) {	
	float aumento = (Empleado->getAnnios() >= 3) ? ((Empleado->getSalario() * 0.05)* Empleado->getAnnios() )
	: ((Empleado->getSalario() * 0.02)* Empleado->getAnnios());
	Empleado->salarioBase += aumento;
	return aumento;
}
void Empleado::revisionAleatoria(Empleado* Empleado,int& binFlag) {
	Empleado->revision = (binFlag== 1) ? 1 : 0;

}
string Empleado::obtenerReporteEmpleado(Empleado& Empleado,int& binFlag) {
	string reporte =
		"\tNombre[" + Empleado.getNombre() + "]" +
		"\n\tAnnios de experiencia[" + std::to_string(Empleado.getAnnios()) + "]" +
		"\n\tSalario Inicial[" + std::to_string(Empleado.getSalario()) + "]" +
		"\n\tSalario Acumulado[";
	revisionAleatoria(&Empleado, binFlag);
	if (Empleado.revision) { Empleado.aumentoSalario(&Empleado); }
	reporte += std::to_string(Empleado.getSalario()) + "]" + "\n\tNecesita revision[";
	reporte+=(Empleado.revision) ? "Si]\n" : "No]\n";
	return reporte;

}


void Empleado::setNombre(string& nombre) { this->nombre = nombre; }
string Empleado::getNombre() { return nombre; }
void Empleado::setAnnios(int& annios) { anniosExp = annios; }
int Empleado::getAnnios() { return anniosExp; }
void Empleado::setNumeroEmpleado(int& numero) { numeroEmpleado = numero; }
int Empleado::getNumeroEmpleado() { return numeroEmpleado; }
void Empleado::setSalario(float& salario) { salarioBase = salario; }
float Empleado::getSalario() { return salarioBase; }
//void Empleado::setFlagTrue() { revision = true; }

