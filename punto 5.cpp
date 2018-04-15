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
}alumnos[100];

int main(){
	int n_alumnos,posM=0;
	float promedio_alumno[100],mayor=0;
	
	printf("Digite el numero de alumnos: ");
	scanf("%d",&n_alumnos);
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		printf("Nombre: "); 
		fgets(alumnos[i].nombre,20,stdin);
		printf("Sexo: "); 
		fgets(alumnos[i].sexo,10,stdin);
		printf("Edad: "); 
		scanf("%d",&alumnos[i].edad);
	
		printf(".:Notas del Examen:.\n");
		printf("Nota1: "); 
		scanf("%f",&alumnos[i].prom.nota1);
		printf("Nota2: ");
		scanf("%f",&alumnos[i].prom.nota2);
		printf("Nota3: "); 
		scanf("%f",&alumnos[i].prom.nota3);
	
		//Sacando el promedio del alumno
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}
		printf("\n");
	}

	printf("\n\nMostrando Datos del alumno con mejor Promedio \n");
	printf("Nombre: %s \n",alumnos[posM].nombre);
	printf("Sexo: %s \n",alumnos[posM].sexo);
	printf("Edad: %d \n",alumnos[posM].edad);
	printf("Promedio: %.2f\n",promedio_alumno[posM]);
		
	system("pause");
	return 0;
}
