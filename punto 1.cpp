#include <stdio.h>
#include <stdlib.h>
struct competidor{
	char nombre[30];
	int edad;
	char sexo[30];
	char club[30];
	
}socio;
void pedirdatos();
void mostrardatos();
int main(){
	
	printf("ingrese un nombre: \n");
	fgets(socio.nombre,30,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&socio.edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(socio.sexo,30,stdin);
	printf("ingrese el club:\n");
	fgets(socio.club,30,stdin);
	
	if(socio.edad>30){
		printf("mayor\n");
	}else if(socio.edad<=15&&socio.edad<=30){
		printf("es infantil\n");
	}
	else{
		printf("es joven\n");
	}
	
	system("pause");
	return 0;
}
 
void pedirdatos(){
		printf("ingrese un nombre: \n");
	fgets(socio.nombre,30,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&socio.edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(socio.sexo,30,stdin);
	printf("ingrese el club:\n");
	fgets(socio.club,30,stdin);
	
}

void mostrardatos(){
	printf("ingrese un nombre: \n");
	fgets(socio.nombre,30,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&socio.edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(socio.sexo,30,stdin);
	printf("ingrese el club:\n");
	fgets(socio.club,30,stdin);	
	
	
	
}
