/*Programa que guarde los datos de un alumno por medio de una estructura, los datos son:
	-nombre
	-promedio
	-faltas
	
	Programa en lenguaje c que guarda los datos de un alumnno con el el uso de estructuras, uso de cadenas, uso de la funciones
	de la libreria string, y uso de la libreria "milibreria.h" creada para validar los datos 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo char*mensaje, char, floata, int
		* Uso de estrcturas
		* Uso del fgets para leer cadenas de caracteres
		* fflush
		* Creacion dela libreria "milibreria.h" para validacion de datos  
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables char*mensaje, char, float y int, condiciones, uso del fgets para leer cadenas de caracteres, 
	uso del fflush, uso de milibreria.h, e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 3 variable del tipo char, float, int(Nombre, promedio, faltas)
	El programa guarda los datos de un alumno por medio de una estructura, lo cuales son, nombre, promedio y faltas
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include "milibreria.h"//libreria que se creo para valdiar datos

//declaraciones globales
struct alumno{//uso de estrcturas
	char nombre[30];//variable de cadenas
	float promedio;//variable con decimales 
	int faltas;//variables de enteros 
};
 
int main(){
	struct alumno a1, a2;//llama a la estrcutura para dos alumnos 
	leers("Introducel el nombre: ",a1.nombre,30);//Validacion de caracteres maximo 30 caracteres	
	a1.promedio=leerF("Introduce el promedio: ",0,10);//Validacion del promedio 0-10
	a1.faltas=leerd("Introduce las faltas: ",0,32);//Validacion de las faltas 0-32
	a2=a1;//la estrcutura del alumno 2 es igual que la del alumno 1
	printf("Datos del alumno:\n");//imprime mensaje
	printf("Nombre: %s \n",a2.nombre);//imprime el nombre del alumno 2
	printf("Promedio: %.1f \n",a2.promedio);//imprime el promedio del alumno 2
	printf("Faltas: %d\n",a2.faltas);//imprime las faltas del alumno 2

	return 0;
}


