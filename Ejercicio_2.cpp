#include<stdio.h>
#define euro 166.386


int main(){
	float pesetas, c_en_euros;
	
	printf("Digite una cantidad de pesetas: ");
	scanf("%d", pesetas);
	
	c_en_euros = pesetas / euro;
	
	printf("\nEquivalen a: %d", c_en_euros);
	
	
	
	return 0;
}
