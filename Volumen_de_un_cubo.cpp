#include<stdio.h>
#include<math.h>

int main(){
	float arista; 
	float cubo;
	
	printf("Digite la longitud de la arista: ");
	scanf("%f", &arista);
	
	cubo = pow(arista,3);
	
	printf("El volumen del cubo es: %f", cubo);
	
	return 0;
	
}