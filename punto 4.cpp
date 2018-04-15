/*4. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la
estructura alumno, luego pedir todos los datos para un alumno, luego calcular su
promedio, y por ultimo imprimir todos sus datos incluidos el promedio.*/

#include <stdio.h>
#include <stdlib.h>


struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumno1;

int main(){
	float promedio_alumno;
	
	printf("Nombre: "); 
	fgets(alumno1.nombre,20,stdin);
	printf("Sexo: "); 
	fgets(alumno1.sexo,10,stdin);
	printf("Edad: "); 
	scanf("%d",&alumno1.edad);
	
	printf(".:Notas del Examen:.\n");
	printf("Nota1: "); 
	scanf("%d",&alumno1.prom.nota1);
	printf("Nota2: "); 
	scanf("%d",&alumno1.prom.nota2);
	printf("Nota3: ");
	 scanf("%d",&alumno1.prom.nota3);
	
	//Sacando el promedio del alumno
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	
	printf("\n\nMostrando Datos\n");
	printf("Nombre:%s\n ",alumno1.nombre);
	printf("Sexo: %s\n",alumno1.sexo);
	printf("Edad: %d\n",alumno1.edad);
	printf("Promedio: %.2d \n",promedio_alumno);
	
	
	system("pause");
	return 0;
}


