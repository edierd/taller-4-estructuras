/*3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados 
de la empresa y que imprima los datos del empleado con mayor y menor salario.*/
#include <stdio.h>
#include <stdlib.h>

struct Empleado{
	char nombre[30];
	int salario;
}empleados[100];

int main(){
	
	int n_empleados=100, mayor=0, menor=999999,posM,posm;
	
	printf("digite el numero de empleados:\n");
	scanf("%d",&n_empleados);
	
	for(int i=0;i<n_empleados;i++){
		
		fflush(stdin);
		printf("nombre:\n");
		fgets(empleados[i].nombre,30,stdin);
	
		printf("digite su salario:\n");
		scanf("%d",&empleados[i].salario);
		if(empleados[i].salario > mayor){
			mayor = empleados[i].salario;
			posM = i;
		}
		//Empleado con menor salario
		if(empleados[i].salario < menor){
			menor  = empleados[i].salario;
			posm = i;
		}		
	}
	printf("\nel empleado con mayor salario es:\n");
	printf("nombre: %s \n",empleados[posM].nombre);
	printf("salario: %d \n",empleados[posM].salario);
	
	printf("\n");
	
	printf("\nEmpleado con menor salario: \n");
	printf("Nombre: %s \n",empleados[posm].nombre);
	printf("Salario: %d \n ",empleados[posm].salario);
    system("pause");	
	return 0;
}

