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
	bool revision;
private:
	
	/**
	 *calcula el aumento de salario si el empleado es seleccionado para revision
	 *
	 * @param puntero a Empleado.
	 * @return cantidad de aumento en valor decimal.
	 */
	float aumentoSalario(Empleado*);
	/**
	 * cambia el valor de revision dependiendo del numero que le entre
	 *
	 * @param puntero a Empleado y un entero entre 0 y 1 por referencia
	 * @return _.
	 */
	void revisionAleatoria(Empleado*,int&);
	
public:
	/**
	 * da forma a la informacion del Empleado para luego mostrarse en pantalla
	 *
	 * @param Empleado y un entero por referencia
	 * @return informacion del Empleado con el formato deseado en forma de string.
	 */
	string obtenerReporteEmpleado(Empleado&,int& );

	/**
	* constructor sin parametros
	*
	*/
	Empleado();
	/**
	* constructor con parametros
	*
	* @param string para el nombre,entero para los annios de exp y float para salarioBase.
	*/
	Empleado(string,int,float);

	//////////////////////////////////////////////////////////////////////////////////////
	/**
	 * metodos Set y Get
	 *
	 * @param los Sets reciben por referencia un valor acorde a lo que se quiere cambiar.
	 * @return los Gets regresan informacion acorde a lo que se solicita.
	 */
	void setNombre(string&);
	string getNombre();
	void setAnnios(int&);
	int getAnnios(); 
	void setNumeroEmpleado(int&);
	int getNumeroEmpleado();
	void setSalario(float&);
	float getSalario();
	void setRevision(int&);
	bool getRevision();





};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
