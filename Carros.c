#include <stdio.h>
#include <string.h>
int main(){
	char carros[5][50], carroEconomico[50];
	float consumoCarros[5];
	int i, j;
	
	for(i = 0; i < 5; i++){
		printf("\nDigite o nome do carro: ");
		scanf("%s", &carros[i]);
		
		printf("\nDigite quantos km o %s faz com 1 litro de gasolina:", carros[i]);
		scanf("%f", &consumoCarros[i]);
	}
	
	for(i = 0; i < 5; i++){
		if(i == 0){
			strcpy(carroEconomico, carros[i]);
		}else{
			for(j = 0; j <= i; j++){
				if(consumoCarros[i] > consumoCarros[j]){
					strcpy(carroEconomico, carros[j]);
				}
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("\nCarro: %s, Consumo: %.2f", carros[i], consumoCarros[i]);
	}
	printf("O carro mais economico é: %s", carroEconomico);
	 
}