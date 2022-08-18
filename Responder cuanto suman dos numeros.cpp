#include<stdio.h>

int main(){
	int n1,n2, resultado, respuesta;
	
	printf("Digite un numero: ");
	scanf("%d", &n1);
	printf("Digite otro numero: ");
	scanf("%d", &n2);
	
	resultado = n1 + n2;
	
	printf("Responda cuanto da la suma de ambos numeros: ");
	scanf("%d", &respuesta);
	
	if(respuesta == resultado){
		printf("\nSu respuesta es correcta!");
	}else{
		printf("\nSu respuesta es incorrecta");
		printf("\nRespuesta correcta: %d", resultado);
	}
	
	return 0;
}