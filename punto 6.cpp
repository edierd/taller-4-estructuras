//La función strcpy copia el contenido de la <cadena_fuente> en la <variable_destino>, siendo ésta un array de caracteres.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Persona_discapacidad{
	char nombre[30];
	bool discapacidad;
}personas[30],personasConD[30],personasSinD[30];
//personasConD = Persona con Discapacidad
//personasSinD = Persona sin Discapacidad

int main(){
	int n_personas,j=0,k=0;
	
	printf("Digite el numero de personas: ");
	scanf("%d",&n_personas);
	//Rellenar el arreglo de estructuras
	for(int i=0;i<n_personas;i++){
		fflush(stdin);
		printf("Nombre : "); 
		fgets(personas[i].nombre,30,stdin);
		printf("Discapacidad (1/0)? :"); 
		scanf("%d",&personas[i].discapacidad);
		
		//Almacenamos las personas con discapacidad
		if(personas[i].discapacidad == 1){
			strcpy(personasConD[j].nombre,personas[i].nombre);
			j++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		//Almacenamos las personas sin Discapacidad
		else{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		printf("\n");
	}
	
	//Mostrar las personas con Discapaciadad
	printf("\nPersonas con Discapacidad\n");
	for(int i=0;i<n_personas;i++){
		printf(personasConD[i].nombre);
	}
	//Mostrar las personas sin Discapacidad
	printf("\nPersonas sin Discapacidad\n");
	for(int i=0;i<n_personas;i++){
		printf(personasSinD[i].nombre);
	}
	system("pause");
	return 0;
}
