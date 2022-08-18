#include<stdio.h>

int main(){
	int n1, n2;
	int suma, multiplicacion;
	
	printf("Digite un numero: ");
	scanf("%d", &n1);
	printf("Digite otro numero: ");
	scanf("%d", &n2);
	
	suma = n1 + n2;
	multiplicacion = n1 * n2;
	
	printf("El resultado de la suma es: %d", suma);
	printf("\nEl resultado de la multiplicacion es: %d", multiplicacion);
	
	return 0;
}