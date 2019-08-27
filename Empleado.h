/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com //Danilo Alvarado Arce
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H
#include <string>
#include <iostream>
#include<stdlib.h>
#include<time.h>
using std::string;
class Empleado {
protected:
	string nombre;
	int numeroEmpleado;
	int anniosExp;
	float salarioBase;
	bool revision=0;
private:
	
	
	float aumentoSalario(Empleado*);
	void revisionAleatoria(Empleado*);
	
public:
	string obtenerReporteEmpleado(Empleado&);
	Empleado();
	Empleado(string,int,int,float);
	void setNombre(string);
	string getNombre();
	void setAnnios(int);
	int getAnnios(); 
	void setNumeroEmpleado(int );
	int getNumeroEmpleado();
	void setSalario(float);
	float getSalario();
	void setFlagTrue();




};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
